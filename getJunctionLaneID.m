% filePath="map2UncontrolledIntersection.net.xml";
% doc=xmlread(filePath);  % 读取xml文件
% 读取XML文件并将其存储在一个名为xmlDoc的变量中
% xmlDoc = xmlread('complexMapUncontrolledIntersection.net.xml'); 
function result=getJunctionLaneID(route,laneIndex,xmlDoc)
% 定义给定的数组route和laneIndex
% route = {'D', 'a'};
% laneIndex = 0;

% 查找满足条件的connection元素
connections = xmlDoc.getElementsByTagName('connection');

% 遍历connections元素，查找匹配项
for i = 0:connections.getLength-1
    connection = connections.item(i);
    
    fromNode = char(connection.getAttribute('from'));
    toNode = char(connection.getAttribute('to'));
    fromLaneStr = char(connection.getAttribute('fromLane'));
    
    % 检查当前connection元素是否满足给定条件
    %     if strcmp(fromNode, route{1})
    %         fromNode
    %         toNode
    %         str2double(fromLaneStr)
    %     end
    result='error';
    if strcmp(fromNode, route{1}) && strcmp(toNode, route{2}) && str2double(fromLaneStr) == laneIndex
        %         viaValue = char(connection.getAttribute('via'));
        %         viaExtracted = strsplit(viaValue, ':');
        
        % 提取出via=":"之后的内容
        % result = viaExtracted{2};
        result = char(connection.getAttribute('via'));
        % 输出结果
        % disp(result);
        
        % 找到第一个匹配项后即可退出循环
        break;
    end
end
% traci.lane.getInternalFoes(':J1_9_0')