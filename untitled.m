% xmlDoc = xmlread('complexMapUncontrolledIntersection.net.xml'); 
% route = {'D', 'a'};
% laneIndex = 0;
% result=getJunctionLaneID(route,laneIndex,xmlDoc)

  1×4 cell 数组

    {':J1_1_0'}    {':J1_5_0'}    {':J1_10_0'}    {':J1_11_0'}


% 假设 vehicleIdList 和 laneInJunction 已经定义好
vehicleIdList = [1, 2, 3, 4]; % 替换为实际的vehicleIdList向量
laneInJunctionList = {'J1_0', 'J1_1', 'J1_1', 'J1_2'}; % 替换为实际的laneInJunction char数组列表

% 创建一个空的二列cell数组
laneIDwithVehNum = cell(0, 2);

% 循环处理每个车辆及其对应的车道ID
for i = 1:length(vehicleIdList)
    % 获取当前车辆的车道ID
    laneInJunction = laneInJunctionList{i};
    
    % 检查laneIDwithVehNum的第一列是否已包含当前车道ID
    isExist = false;
    for j = 1:size(laneIDwithVehNum, 1)
        if strcmp(laneIDwithVehNum{j, 1}, laneInJunction)
            % 如果存在，则将车辆数量追加到第二列
            laneIDwithVehNum{j, 2} = [laneIDwithVehNum{j, 2}, vehicleIdList(i)];
            isExist = true;
            break;
        end
    end
    
    % 如果不存在，则在末尾插入新的行
    if ~isExist
        laneIDwithVehNum{end+1, 1} = laneInJunction;
        laneIDwithVehNum{end, 2} = vehicleIdList(i);
    end
end



% 假设给定的数字是 i
i = 1; % 替换为实际要查找的数字

% 遍历laneIDwithVehNum数组的每一行
for rowIdx = 1:size(laneIDwithVehNum, 1)
    % 检查当前行第二列是否包含数字 i
    if ismember(i, laneIDwithVehNum{rowIdx, 2})
        % 找到后，输出这一行的第一列内容
        foundLaneID = laneIDwithVehNum{rowIdx, 1};
        fprintf('Number %d is in the row with Lane ID: %s\n', i, foundLaneID);
        
        % 由于找到后就可以结束搜索，所以添加 break 语句
        break;
    end
end


conflictLanes = {':J1_1_0', ':J1_5_0', ':J1_10_0', ':J1_11_0'};
laneIDwithVehNum = {'J1_0', 1;':J1_1_0',[2 3]; ':J1_5_0',4};
pConflictSingle = [];
% 遍历conflictLanes中的每一个元素
for idx = 1:length(conflictLanes)
    conflictLaneSingle = conflictLanes{idx};
    
    % 查找conflictLaneSingle在laneIDwithVehNum第一列中的位置
    rowIdx = find(strcmp(laneIDwithVehNum(:, 1), conflictLaneSingle));
    
    % 如果找到匹配项，则将对应行的第二列元素添加到pConflictSingle末尾
    if ~isempty(rowIdx)
        pConflictSingle = [pConflictSingle,laneIDwithVehNum{rowIdx, 2}];
    end
end

% 将pConflictSingle从cell数组转换为数值向量（如果需要）
pConflictSingle = cell2mat(pConflictSingle);

traci.vehicle.getLaneID('1')

% 检查并添加新列
targetLane1 = ':J1_11_0';
targetLane2 = ':J1_3_0';
newColumn1Data = {':J1_17_0', laneIDwithVehNum{find(strcmp(laneIDwithVehNum(:, 1), targetLane1)), 2}};
newColumn2Data = {':J1_16_0', laneIDwithVehNum{find(strcmp(laneIDwithVehNum(:, 1), targetLane2)), 2}};
% 根据找到的目标车道分别增加新列
if ~isempty(find(strcmp(laneIDwithVehNum(:, 1), targetLane1)))
    laneIDwithVehNum= [laneIDwithVehNum;newColumn1Data];
end

if ~isempty(find(strcmp(laneIDwithVehNum(:, 1), targetLane2)))
    laneIDwithVehNum= [laneIDwithVehNum;newColumn2Data];
end

% 假设原始double数组
pConflictSingle = [1.0, 2.0, 2.0, 3.0, 3.0, 4.0];

% 使用unique函数去除重复元素
[~, idx] = unique(pConflictSingle);
pConflictSingleWithoutDuplicates = pConflictSingle(sort(idx));
pConflictSingle=pConflictSingleWithoutDuplicates;
% 现在pConflictSingleWithoutDuplicates就是去重后的数组
disp(pConflictSingleWithoutDuplicates);




% 假设原始cell数组，每个元素是一个char数组
conflictLanes = {'abc', 'def', 'abc', 'ghi', 'def'};

% 将char数组转换为字符串数组
strLanes = cellfun(@char, conflictLanes, 'UniformOutput', false);
% 使用unique函数去除重复元素
[~, idx] = unique(strLanes);
uniqueLanes = conflictLanes(sort(idx));
% 现在uniqueLanes就是去重后的cell数组
disp(uniqueLanes);
