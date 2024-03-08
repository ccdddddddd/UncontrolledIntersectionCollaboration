clear
load('myData.mat');

fillValue = -99; % 设置填充值为-90
minLength = min([numel(dis2center), numel(velocity), numel(accel)]);
maxLength = 20;

% 填充 dis2center, velocity, accel 至长度为 20
dis2center_padded = [dis2center,repmat(fillValue, 1, maxLength - minLength)];
velocity_padded = [velocity,repmat(fillValue, 1, maxLength - minLength)];
accel_padded = [accel,repmat(fillValue, 1, maxLength - minLength)];

% 确保数组长度正好为 20，如果原本就超过 20，则截取前 20 个元素
dis2center_padded = dis2center_padded(1:maxLength);
velocity_padded = velocity_padded(1:maxLength);
accel_padded = accel_padded(1:maxLength);

% 初始化结构体数组，长度为20，预填充默认值 -99
defaultValue = int16(-99);
pConflictStruct = struct('values', repmat({defaultValue*ones(1,20,'int16')}, 1, 20));

% 将 pConflict 中的有效数据填充至 pConflictStruct，不足20的部分用-99填充
for i = 1:numel(pConflict)
    if ~isempty(pConflict{i})
        validValues = pConflict{i};
        paddedValidValues = [validValues, repmat(defaultValue, 1, 20 - numel(validValues))];
        pConflictStruct(i).values = paddedValidValues(1:20);
    end
end
numOfVehs=int16(numOfVehs);
vTargetOut=UncontrolInterCollab4so(numOfVehs,dis2center_padded,velocity_padded,accel_padded,pConflictStruct,calibrationVars);

% 比较前numOfVehs个元素是否完全相同
isEqual = all(vTargetOut(1:numOfVehs) == vTarget(1:numOfVehs));

if isEqual
    disp('前numOfVehs个元素完全相同');
else
    disp('前numOfVehs个元素不完全相同');
end
