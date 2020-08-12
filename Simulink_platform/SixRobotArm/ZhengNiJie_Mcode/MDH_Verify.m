clear,clc,close all;
%% 建立机器人DH参数，初始状态为竖直状态
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6')
Theta=[0 0 0 0 0 0];
% Theta=[-30.0000  -58.2807   30.0000  -61.7193  -30.0000  -30.0000];
Theta=Theta/180*pi;                         %换算成弧度
forwarda=robot.fkine(Theta)             %求正解的齐次变换矩阵
W=[-1000,+1000,-1000,+1000,-1000,+1000];  %限制坐标轴的范围
robot.plot(Theta,'tilesize',150,'workspace',W);  %显示三维动画
robot.teach(forwarda,'rpy' )              %显示roll/pitch/yaw angles，GUI可调界面