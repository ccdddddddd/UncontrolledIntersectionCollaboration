clear
close all
dis2center=[11,111,1111,4,52];
vMin=0;
vMax=20;
aMin=-3;
aMax=1.5;
dt=0.2;
% 根据 dis2center 的大小对车辆进行排序
[sortedDis, sortIndex] = sort(dis2center);
% 根据排序结果重新排列位移、速度和加速度数组
pDis = dis2center(sortIndex);
v = velocity(sortIndex);
a = accel(sortIndex);
pDis0=pDis(1)-D;
v0=vMax;
% 根据lane搜寻冲突关系，确定P数组们

% 定义numOfVehs
numOfVehs = 10;
% 创建一个空的cell数组
p = cell(1, numOfVehs);
p{1} = [0];
p{2} = [0];
p{3} = [1,2];
p{4} = [1];
p{5}=[1,2];
p{6}=[1,3,4,5];
p{7}=[3,4,5];
p{8}=[1,3,5];
p{9}=[1,2,3,4,5,6,7];
p{10}=[6,7];
E=[];
for i=1:1:numOfVehs
    for j=0:1:i
        if ismember(j, p{i})
            E=[E;j,i];
        end
    end
end
vSchlang=[];
eSchlang=[];
l=zeros(1,numOfVehs+1);
l(1)=1;
for i=1:1:numOfVehs
    % 找到有向图𝒢𝑁+1中节点i 的所有父节点j，即所有𝑗 ∈ {𝑗|(𝑗, 𝑖) ∈ ℰ𝑁+1}。
    matching_columns = E(E(:, 2) == i,1);
    % 找到节点i 的所有父节点中层数最大的节点k，其层数为𝑙𝑘。
    [lk,~]=max(l(matching_columns+1));
    kInMatching_columns = find(l(matching_columns+1) == lk, 1, 'last');
    k=matching_columns(kInMatching_columns);
    l(i+1) = 1+lk;
    vSchlang=[vSchlang,i];
    eSchlang=[eSchlang;k,i];
end
% 创建一个空的cell数组
A = cell(1, numOfVehs);
B = cell(1, numOfVehs);
kGen = 2; % 设定的阈值
for targetNode=1:1:numOfVehs
    [reachable_to_node, reachable_from_node] = findNodeConnections(eSchlang,targetNode,kGen,l);
    A{targetNode}=[reachable_to_node;reachable_from_node];
    for j=1:1:numOfVehs
        if l(targetNode+1)==l(j+1) && targetNode~=j
            B{targetNode}=[B{targetNode},j];
        end
    end
end
aMatrix=zeros(numOfVehs,numOfVehs);
lMatrix=zeros(numOfVehs,numOfVehs);
qMatrix=zeros(numOfVehs,numOfVehs);
for i=1:1:numOfVehs
    for j = [(A{i})',B{i}]
        if j~=0
            aMatrix(i, j) = 1;
            aMatrix(j, i) = 1;
        end
    end
end
% 对于每一个元素 i 和 j，根据给定的条件进行操作
for i = 1:numOfVehs
    for j = 1:numOfVehs
        if i == j
            lMatrix(i, j) = sum(aMatrix(i, :));
        else
            lMatrix(i, j) = -aMatrix(i, j);
        end
    end
end
[reachable_to_node0, reachable_from_node0] = findNodeConnections(eSchlang,0,100,l);
for i = [reachable_to_node0, reachable_from_node0]'
    qMatrix(i, i) = 1;
end
kp=0.15;
kv=0.7;
kVector=[kp,kv,0];
u=zeros(1,numOfVehs);
x = cell(1, numOfVehs);
for i=1:1:numOfVehs
    x{i}=[pDis0-pDis(i)-D*(l(0+1)-l(i+1));v(i)-v0;a(i)];
end
for i=1:1:numOfVehs
    for j=1:1:numOfVehs
        u(i)=u(i)-(l(i,j)+q(i,j))*kVector*x{j};
    end
end
% 将数组 u 中的所有元素限制在 [aMin, aMax] 范围内
u(u < aMin) = aMin;
u(u > aMax) = aMax;
vTarget=v+u*dt;
function [reachable_to_node, reachable_from_node] = findNodeConnections(eSchlang, targetNode,kGen,l)
    % 初始化可以到达目标节点的节点集合
    reachable_to_target = targetNode;
    old_reachable_to_target = [];
    % 通过循环查找可以到达目标节点的节点集合
    while ~isequal(reachable_to_target, old_reachable_to_target)
        old_reachable_to_target = reachable_to_target;
        reachable_to_target = unique([reachable_to_target; ...,
            eSchlang(ismember(eSchlang(:,2), reachable_to_target) & (abs(l(eSchlang(:,1)+1)-l(targetNode+1))<=kGen)',1)]);
    end
    % 找到可以从目标节点出发到达的节点集合
    reachable_from_target = targetNode;
    old_reachable_from_target = [];
    % 通过循环查找可以从目标节点出发到达的节点集合
    while ~isequal(reachable_from_target, old_reachable_from_target)
        old_reachable_from_target = reachable_from_target;
        reachable_from_target = unique([reachable_from_target; ...,
            eSchlang(ismember(eSchlang(:,1), reachable_from_target) & (abs(l(eSchlang(:,2)+1)-l(targetNode+1))<=kGen)', 2)]);
    end
    % 返回结果
    reachable_to_node = setdiff(reachable_to_target, targetNode); % 排除目标节点
    reachable_from_node = setdiff(reachable_from_target, targetNode); % 排除目标节点
end

% for i = 0:1:numOfVehs
%     % 找到所有出现 i 的行
%     idx = find(eSchlang == i);
%     [row, ~] = ind2sub(size(eSchlang), idx);
%     % 获取除了 i 之外的元素的值的集合 Apre
%     Apre = [];
%     for j = 1:size(row, 1)
%         if eSchlang(row(j), 1) == i
%             Apre = [Apre, eSchlang(row(j), 2)];
%         else
%             Apre = [Apre, eSchlang(row(j), 1)];
%         end
%     end
%     % 判断每个元素是否满足条件，将满足条件的元素放入 A{i}
%     A{i+1} = Apre(abs(l(i+1) - l(Apre+1)) <= kGen);
% end
% 
% % 创建一个示例矩阵 E
% E = [1 2; 3 4; 5 6; 7 6; 9 10];
% % 设置要搜索的值 i
% i = 6;
% % 找出第二行等于 i 的所有列
% matching_columns = find(E(:, 2) == i);
% % 找出这些列中的第一行中的最大值
% max_value_in_matching_columns = max(E(matching_columns, 1));
% 
% 
% % 定义numOfVehs
% numOfVehs = 10;
% % 创建一个空的cell数组
% p = cell(1, numOfVehs);
% % 为每个cell分配一个一维数组
% for i = 1:numOfVehs
%     p{i} = rand(1, 5); % 以随机数填充一维数组，这里使用了长度为10的一维数组作为示例
% end

