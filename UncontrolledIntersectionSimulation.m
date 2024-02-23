close('all');
clc;
import traci.constants;
isVehControled=1;
is4Video=0;
calibrationVars.vMin= 0;
calibrationVars.vMax=20;
calibrationVars.aMin=-3;
calibrationVars.aMax=1.5;
calibrationVars.dt=0.2;
calibrationVars.kGen=2;
calibrationVars.kp=0.15;
calibrationVars.kv=0.7;
calibrationVars.D=25;
% 设置仿真时间
SIM_STEPS = [1 2000];
% beginTime = SIM_STEPS(1);
duration =  SIM_STEPS(2);
% endTime =  SIM_STEPS(1) +  SIM_STEPS(2) - 1;
traci.start(strcat('sumo-gui -c ./','UncontrolledIntersection.sumocfg --start'));
plotFlag=0;
speedProfile = cell(1, 10);
disProfile = cell(1, 10);
for i = 1:1: duration
    traci.simulation.step();
    %% 放置车辆
    if i==1
        traci.gui.setZoom('View #0', 200);
        if is4Video
            pause(2);
        end
        if plotFlag
            calibrationVars.vMax=10;
            DEPARTSPEEDexample=6;
            traci.vehicle.add('1','5',DEPARTPOS='100',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('2','12',DEPARTPOS='90',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('3','10',DEPARTPOS='75',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('4','9',DEPARTPOS='70',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('5','4',DEPARTPOS='60',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('6','1',DEPARTPOS='50',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('7','7',DEPARTPOS='40',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('8','6',DEPARTPOS='30',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('9','8',DEPARTPOS='20',DEPARTSPEED=num2str(DEPARTSPEEDexample));
            traci.vehicle.add('10','3',DEPARTPOS='10',DEPARTSPEED=num2str(DEPARTSPEEDexample));
        else
            traci.vehicle.add('1','5',DEPARTPOS='100',DEPARTSPEED='10');
            traci.vehicle.add('2','12',DEPARTPOS='90',DEPARTSPEED='10');
            traci.vehicle.add('3','10',DEPARTPOS='75',DEPARTSPEED='6');
            traci.vehicle.add('4','9',DEPARTPOS='70',DEPARTSPEED='10');
            traci.vehicle.add('5','4',DEPARTPOS='60',DEPARTSPEED='10');
            traci.vehicle.add('6','1',DEPARTPOS='50',DEPARTSPEED='10');
            traci.vehicle.add('7','7',DEPARTPOS='40',DEPARTSPEED='10');
            traci.vehicle.add('8','6',DEPARTPOS='30',DEPARTSPEED='10');
            traci.vehicle.add('9','8',DEPARTPOS='20',DEPARTSPEED='10');
            traci.vehicle.add('10','3',DEPARTPOS='10',DEPARTSPEED='10');
        end
    end
    %% get所有车并且计算他们的dis2center,velocity,accel
    if i>1
        vehicleIdList={};
        routeIDs=[];
        dis2center=[];
        velocity=[];
        accel=[];
        currentVehicleIds=traci.vehicle.getIDList();  % 获取在仿真中的所有车辆
        % 将单元数组转换为数值数组
        numericIds = cellfun(@str2num, currentVehicleIds);
        % 按照数字顺序排序
        sortedIds = sort(numericIds);
        % 将数值数组转换回单元数组
        sortedCellIds = cellfun(@num2str, num2cell(sortedIds), 'UniformOutput', false);
        if plotFlag
            for iterSpeedProfile=1:1:10
                if ismember(iterSpeedProfile, numericIds)
                    speedProfile{iterSpeedProfile} =[speedProfile{iterSpeedProfile},traci.vehicle.getSpeed(num2str(iterSpeedProfile))];
                end
                if ismember(iterSpeedProfile, numericIds) && ismember(traci.vehicle.getRoadID(num2str(iterSpeedProfile)), {'A', 'B', 'C', 'D'})
                    disProfile{iterSpeedProfile} =[disProfile{iterSpeedProfile},traci.vehicle.getLanePosition(num2str(iterSpeedProfile))];
                end
            end
        end
        for VehicleIdCell=sortedCellIds
            vehicleId=VehicleIdCell{1};
            if i==2 && isVehControled==1
                traci.vehicle.setSpeedMode(vehicleId,0);
            end
            edgeId=traci.vehicle.getRoadID(vehicleId);
            if ismember(edgeId, {'A', 'B', 'C', 'D'})
                vehicleIdList=[vehicleIdList,vehicleId];
                routeIDChar=traci.vehicle.getRouteID(vehicleId);
                routeID=str2num(routeIDChar);
                routeIDs=[routeIDs,routeID];
                laneID=traci.vehicle.getLaneID(vehicleId);
                lengthLaneID=traci.lane.getLength(laneID);
                dis2centerSingle=lengthLaneID-traci.vehicle.getLanePosition(vehicleId);
                dis2center=[dis2center,dis2centerSingle];
                velocitySingle=traci.vehicle.getSpeed(vehicleId);
                velocity=[velocity,velocitySingle];
                accelSingle=traci.vehicle.getAccel(vehicleId);
                accel=[accel,accelSingle];
            end
        end
        numOfVehs=length(vehicleIdList);
        pConflict = cell(1, numOfVehs);
        for iter=1:1:numOfVehs
            switch routeIDs(iter)
                case 1
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [11,10,9,8,5,4,3,2,1]));
                case 2
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [11,10,7,6,5,4,3,2,1]));
                case 3
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [11,7,3,2,1]));
                case 4
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [2,1,12,11,8,7,6,5,4]));
                case 5
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [2,1,10,9,8,7,6,5,4]));
                case 6
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [2,10,6,5,4]));
                case 7
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [5,4,3,2,11,10,9,8,7]));
                case 8
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [5,4,1,12,11,10,9,8,7]));
                case 9
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [5,1,9,8,7]));
                case 10
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [8,7,6,5,2,1,12,11,10]));
                case 11
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    roueIDnum = find(ismember(routeIDs, [8,7,4,3,2,1,12,11,10]));
                case 12
                    % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
                    routeIDnum = find(ismember(routeIDs, [8,4,12,11,10]));
                otherwise
            end
            % 搜寻小于dis2centerSingle的元素的序号们，存储为数组dis2centerNum
            %             iter
            %             dis2center
            %             numOfVehs
            %             vehicleIdList
            dis2centerNum = find(dis2center < dis2center(iter));
            % 求这两个数组routeIDnum和dis2centerNum的交集
            %             if iter==7 || iter==8
            %                 routeIDnum
            %                 dis2centerNum
            %             end
            pConflict{iter} = intersect(routeIDnum, dis2centerNum);
        end
        % 'A'、'B'、'C'、'D'
        if numOfVehs~=0
            vTarget=UncontrolledIntersectionCollaboration(numOfVehs,dis2center,velocity,accel,pConflict,calibrationVars);
            result = find((vTarget - velocity > 0.301) | (vTarget - velocity < -0.601));
            %             if ~isempty(result)
            %                 vTarget
            %                 velocity
            %             end
        end
        edgeList=traci.edge.getIDList;
        unwanted_elements = {'A', 'B', 'C', 'D', 'a', 'b', 'c', 'd'};
        edgeList = edgeList(~ismember(edgeList, unwanted_elements));
        vehNumToGetThrough=numOfVehs;
        for edgeID=edgeList
            vehNumToGetThrough=vehNumToGetThrough+traci.edge.getLastStepVehicleNumber(edgeID{1});
        end
        if vehNumToGetThrough==0 && is4Video==0
            disp(i*0.2);
            system('taskkill /f /t /im sumo-gui.exe');
            break;
        end
        if isVehControled==1
            for iter=1:1:length(vehicleIdList)
                traci.vehicle.setSpeed(vehicleIdList{iter},vTarget(iter));
            end
        end
    end
end
if plotFlag
    figure;
    hold on;
    for i = 1:10
        plot(0.2:0.2:0.2*length(speedProfile{i}),speedProfile{i});
    end
    hold off;
    figure;
    hold on;
    for i = 1:10
        plot(0.2:0.2:0.2*length(disProfile{i}),disProfile{i});
    end
    hold off;
    legend('vehicle 1','vehicle 2','vehicle 3','vehicle 4','vehicle 5','vehicle 6','vehicle 7','vehicle 8','vehicle 9','vehicle 10','Location','southeast');
    title('Displacement-Time Curve of Multi Cars');
    xlabel('t (s)');
    ylabel('s (m)');
end
% routeIDs = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11];
% dis2center = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20];
% dis2centerSingle = 10;
% 
% % 搜寻属于[1,11,10,9,5,4]的元素的序号们，存储为数组routeIDnum
% routeIDnum = find(ismember(routeIDs, [1, 11, 10, 9, 5, 4]));
% 
% % 搜寻小于dis2centerSingle的元素的序号们，存储为数组dis2centerNum
% dis2centerNum = find(dis2center < dis2centerSingle);
% 
% % 求这两个数组routeIDnum和dis2centerNum的交集
% intersection = intersect(routeIDnum, dis2centerNum);
% 
% disp(intersection);

% % 创建一个长度为10的cell数组speedProfile
% speedProfile = cell(1, 10);
% % 为speedProfile中的每个元素赋值为不同长度的数组
% for i = 1:10
%     speedProfile{i} = randi([1, 10], 1, i);  % 这里使用随机数作为示例
% end
% % 将每个cell中的数组都画在一张图中
% figure;
% hold on;
% for i = 1:10
%     plot(speedProfile{i});
% end
% hold off;


% traci.lane.getInternalFoes(':J1_7_0')
% traci.lane.getLinks('a_0')
% traci.vehicle.getLine('2')
% traci.lane.getLinks('A_0')
% traci.lane.getFoes('A_0','d_0')
% traci.lane.getFoes('A_0','b_0')
% 
% traci.lane.getLinkNumber(':J1_7_0')
% 

