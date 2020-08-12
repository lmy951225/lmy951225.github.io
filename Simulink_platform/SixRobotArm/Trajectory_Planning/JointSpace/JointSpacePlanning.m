clear;clc;close all;
%% 建立机器人DH参数，初始状态为竖直状态
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6');
%% 根据给定起始点，得到起始点位姿
T1=[350,300,200,30,0,60];
%% 根据给定终止点，得到终止点位姿
T2=[-200,250,350,0,0,60];
%% 根据起始点位姿，得到起始点关节角
A1=InverseSolver_MDH(T1);
a1=A1(1,1);a2=A1(1,2);a3=A1(1,3);a4=A1(1,4);a5=A1(1,5);a6=A1(1,6);
%% 根据终止点位姿，得到终止点关节角
B1=InverseSolver_MDH(T2);
b1=B1(5,1);b2=B1(5,2);b3=B1(5,3);b4=B1(5,4);b5=B1(5,5);b6=B1(5,6);
%% 求每个关节角的五次多项式插补轨迹点
% 运动学单段的五次多项式轨迹规划，定义插补次数n,一定不能超过64
StopTime=10;FixedStep=0.2;n=0:FixedStep:StopTime;Cunt=length(n);
[q1,qd1,~] = Fivejtraj_Function([a1,b1],[0,StopTime],[0,0],[0,0],FixedStep); 
[q2,qd2,~] = Fivejtraj_Function([a2,b2],[0,StopTime],[0,0],[0,0],FixedStep);
[q3,qd3,~] = Fivejtraj_Function([a3,b3],[0,StopTime],[0,0],[0,0],FixedStep);
[q4,qd4,~] = Fivejtraj_Function([a4,b4],[0,StopTime],[0,0],[0,0],FixedStep);
[q5,qd5,~] = Fivejtraj_Function([a5,b5],[0,StopTime],[0,0],[0,0],FixedStep);
[q6,qd6,~] = Fivejtraj_Function([a6,b6],[0,StopTime],[0,0],[0,0],FixedStep);
qT=[q1;q2;q3;q4;q5;q6];
vT=[qd1;qd2;qd3;qd4;qd5;qd6];
%% 求正解
Q=qT';                                   %求转置
T=robot.fkine(Q*pi/180);        %求正解，得到每次对应的空间位姿矩阵
JTA=transl(T);                        %空间位姿矩阵转化为位置矩阵
rpy=tr2rpy(T,'xyz');                % T中提取姿态（rpy）
%% 绘制末端位置
W=[-1000,+1000,-1000,+1000,-1000,+1000];
plot3( JTA(1:end,1), JTA(1:end,2), JTA(1:end,3),'r');
axis(W);   %设置坐标轴范围
hold on;grid on;
plot3(T1(1),T1(2),T1(3),'o','color','m');
plot3(T2(1),T2(2),T2(3),'o','color','c');
%% 进行动态显示查看关节之间是否发生干涉、碰撞等情况，输入关节角度必须是弧度
robot.plot(Q*pi/180,'tilesize',150,'workspace',W); 
%% 需要填充QP(度)，QV(度/秒)，QT(毫秒)三个数据矩阵
%% 控制器在PVT模式下的数据最大容量为64，插补点数量不能超过64
QP = zeros(6,64);    QV = zeros(6,64);    QT = zeros(1,64);TimeSize=FixedStep*1000;
for i=1:Cunt
    QP(1,i)=qT(1,i);  QV(1,i)=vT(1,i);
    QP(2,i)=qT(2,i);  QV(2,i)=vT(2,i);
    QP(3,i)=qT(3,i);   QV(3,i)=vT(3,i);  
    QP(4,i)=qT(4,i);  QV(4,i)=vT(4,i);
    QP(5,i)=qT(5,i);  QV(5,i)=vT(5,i);
    QP(6,i)=qT(6,i);  QV(6,i)=vT(6,i);
    QT(i) =TimeSize;
end
%% 查看关节角度是否超出限制范围，如果超出范围，生成的轨迹点是有问题的，一定不能使用
figure('numbertitle','on','name','关节角位置信息')
subplot(3,2,1), plot(QP(1,1:Cunt),'.'),xlabel('t'),ylabel('theta1');grid on;    % PVT模式下，theta1为-179~+179
subplot(3,2,2), plot(QP(2,1:Cunt),'.'),xlabel('t'),ylabel('theta2');grid on;    % PVT模式下，theta2为-146~+146
subplot(3,2,3), plot(QP(3,1:Cunt),'.'),xlabel('t'),ylabel('theta3');grid on;    % PVT模式下，theta3为-146~+146
subplot(3,2,4), plot(QP(4,1:Cunt),'.'),xlabel('t'),ylabel('theta4');grid on;    % PVT模式下，theta4为-179~+179
subplot(3,2,5),plot(QP(5,1:Cunt),'.'),xlabel('t'),ylabel('theta5');grid on;     % PVT模式下，theta5为-179~+179
subplot(3,2,6),plot(QP(6,1:Cunt),'.'),xlabel('t'),ylabel('theta6');grid on;     % PVT模式下，theta6为-179~+179
%% 查看关节速度是否超过148，如果超出范围，生成的轨迹点是有问题的，一定不能使用
figure('numbertitle','on','name','关节角速度信息')
subplot(3,2,1), plot(QV(1,1:Cunt),'.'),xlabel('t'),ylabel('QV1');grid on;
subplot(3,2,2), plot(QV(2,1:Cunt),'.'),xlabel('t'),ylabel('QV2');grid on;
subplot(3,2,3), plot(QV(3,1:Cunt),'.'),xlabel('t'),ylabel('QV3');grid on;
subplot(3,2,4), plot(QV(4,1:Cunt),'.'),xlabel('t'),ylabel('QV4');grid on;
subplot(3,2,5),plot(QV(5,1:Cunt),'.'),xlabel('t'),ylabel('QV5');grid on;
subplot(3,2,6),plot(QV(6,1:Cunt),'.'),xlabel('t'),ylabel('QV6');grid on;
figure('numbertitle','on','name','时间信息')
%% 查看时间间隔是否超过256ms，如果超出范围，生成的轨迹点是有问题的，一定不能使用
plot(QT(1,1:Cunt),'.'),xlabel('t'),ylabel('QT');grid on;
%% 清楚多余数据，保留关键数据
save('PVTdata.mat','QP','QV','QT','Cunt','TimeSize','Q');clear,clc;
load('PVTdata.mat');