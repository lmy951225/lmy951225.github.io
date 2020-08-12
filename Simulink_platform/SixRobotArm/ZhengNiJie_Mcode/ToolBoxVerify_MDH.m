clear,clc,close all;
%% 建立机器人DH参数，初始状态为竖直状态
% 连杆偏移d,连杆长度a,连杆扭转角alpha
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6');
%% 正解，给定关节角，求末端位姿，样例
% Theta = [0 0 0 0 0 0];  %给定6个关节角度值
% Theta=[30 30 30 30 30 30];
% Theta=[-30 -30 -30 -30 -30 -30];
% [T60,Pos]=ForwardSolver_MDH(Theta)        % Pos=[X,Y,Z,Rall,Pitch,Yaw];
%% 逆解，给定末端位姿求关节角，(X,Y,Z单位为mm)，(Rall,Pitch,Yaw单位为deg)
Pos=[308.0304 -367.2397  524.1307   43.8979  -25.6589   56.3099];             %给定末端位姿
% Pos=[300 400 300 0 0 0];
AllSloverTheta=InverseSolver_MDH(Pos)    %根据末端位姿求所有解
Theta=AllSloverTheta(1,1:end)                      %选择第一组解，PTP程序是默认为第一组解
%% 验证正逆解的结果
Theta=Theta/180*pi;                         %换算成弧度
forwarda=robot.fkine(Theta)             %求正解的齐次变换矩阵
W=[-1000,+1000,-1000,+1000,-1000,+1000];%限制坐标轴的范围
robot.plot(Theta,'tilesize',150,'workspace',W);  %显示三维动画
q1=robot.ikine(forwarda)*180/pi      %求逆解验证关节角
rpy=tr2rpy(forwarda, 'xyz')*180/pi    %求末端姿态，工具法兰为绕XYZ轴旋转
robot.teach(forwarda,'rpy' )              %显示roll/pitch/yaw angles，GUI可调界面

Qua=UnitQuaternion(forwarda)