clear;clc,close all;
%% 建立机器人DH参数，初始状态为竖直状态
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6');
StepSize=100;
Q=zeros(StepSize+1,6);                     %用于保存逆解求的值,Q为(step+1)x6的矩阵
 n=[0 0 1]; %法向量n
 r=150; %圆的半径为1
 c=[300 300 200]; %圆心的坐标

pos = yuan(n, r, c,StepSize);    %pos为3x(step+1)的矩阵
T=pos; 

%% 求逆解，并区其中关节角变化量最小的一组解
for i=1:StepSize+1
    if i==1
%% 根据[50,0,100,-20,-90,0]选择逆解得到的关节角变化量最小的一组解
        Q(i,:)=InverseSolver_MDH_ZY([T(i,:),0,0,180],zeros(1,6));
    else
        Q(i,:)=InverseSolver_MDH_ZY([T(i,:),0,0,180],Q(i-1,:));
    end
end
W=[-1000,+1000,-1000,+1000,-1000,+1000];
plot3(T(1:end,1),T(1:end,2),T(1:end,3),'r');
axis(W);   %设置坐标轴范围
hold on;grid on;
robot.plot(Q*pi/180,'tilesize',150,'workspace',W); 
figure
PT_t=Q';Gain=1;
subplot(3,2,1), plot(PT_t(1,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta1');grid on; % PT模式下，theta1为-179~+179
subplot(3,2,2), plot(PT_t(2,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta2');grid on; % PT模式下，theta2为-146~+146
subplot(3,2,3), plot(PT_t(3,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta3');grid on; % PT模式下，theta3为-149~+149
subplot(3,2,4), plot(PT_t(4,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta4');grid on; % PT模式下，theta4为-179~+179
subplot(3,2,5),plot(PT_t(5,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta5');grid on;  % PT模式下，theta5为-179~+179
subplot(3,2,6),plot(PT_t(6,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta6');grid on;  % PT模式下，theta6为-179~+179
