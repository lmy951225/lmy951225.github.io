clear;clc,close all;
%% 建立机器人DH参数，初始状态为竖直状态
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6');
%% 给定三个末端的空间位置 ，三组参考值
StepSize_Simulation=100;StepSize_RealControl=1000; %仿真插补次数,实际控制的插补次数不能超过2480
Step=[StepSize_Simulation,StepSize_RealControl];TimeSize=10;Num=1;           %通过Num确定仿真还是实际插补次数
% p1=[150,200,250];p2=[200,250,300];p3=[300,350,400];StepSize=Step(Num);   %空间直线
% p1=[-300,200,200];p2=[0,200,300];p3=[300,200,400];StepSize=Step(Num);     % 空间直线
p1=[320,250,200];p2=[-230,-320,350];p3=[89,-439,181];StepSize=Step(Num);    %空间小半径大圆弧
%% 进行直线插补、圆弧插补、抛物线插补判断
pos = Interpolation(p1, p2, p3,StepSize);    %pos为3x(step+1)的矩阵
T=pos';                                       %求转置，T为(step+1)x3的矩阵
JTA=transl(T);                              %将空间位置转化为位置矩阵
Q=zeros(StepSize+1,6);                     %用于保存逆解求的值,Q为(step+1)x6的矩阵
%% 求逆解，并区其中关节角变化量最小的一组解
for i=1:StepSize+1
    if i==1
%% 根据[50,0,100,-20,-90,0]选择逆解得到的关节角变化量最小的一组解
        Q(i,:)=InverseSolver_MDH_ZY([T(i,:),0,0,180],[50,0,100,-20,-90,0]);
    else
        Q(i,:)=InverseSolver_MDH_ZY([T(i,:),0,0,180],Q(i-1,:));
    end
end
W=[-1000,+1000,-1000,+1000,-1000,+1000];
plot3(T(1:end,1),T(1:end,2),T(1:end,3),'r');
axis(W);   %设置坐标轴范围
hold on;grid on;
plot3(p1(1),p1(2),p1(3),'o','color','m');
plot3(p2(1),p2(2),p2(3),'o','color','c');
plot3(p3(1),p3(2),p3(3),'o','color','b');
%% 进行动态显示查看关节之间是否发生干涉、碰撞等情况，输入关节角度必须是弧度
if Num==1
    robot.plot(Q*pi/180,'tilesize',150,'workspace',W); 
end
%% 需要填充PT_t(度)数据矩阵，PT_c(插补次数+1)
%% 控制器在PT模式下的数据最大容量为2460，插补点数量不能超过2460
PT_t = zeros(6,2460);           %六个关节的角度，插补的最大次数为2460
PT_c = StepSize+1;             % 轨迹数量
QS_T = Q';                          %求转置，QS_T为8x(step+1)的矩阵
Gain=100;                           %发送给驱动器的放大系数提高数据精度，不可更改默认为100
for i = 1:PT_c
    PT_t(1,i) = QS_T(1,i)*Gain;   
    PT_t(2,i) = QS_T(2,i)*Gain;
    PT_t(3,i) = QS_T(3,i)*Gain;     
    PT_t(4,i) = QS_T(4,i)*Gain;
    PT_t(5,i) = QS_T(5,i)*Gain;
    PT_t(6,i) = QS_T(6,i)*Gain;
end
%% 先验证是否超出限制范围，在动态仿真看关节之间是否发生干涉、碰撞等情况
% 查看关节角度是否发生突变并且不要超出限制范围，如果发生突变表示，生成的轨迹点是有问题的，重新生成新的轨迹
figure
subplot(3,2,1), plot(PT_t(1,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta1');grid on; % PT模式下，theta1为-179~+179
subplot(3,2,2), plot(PT_t(2,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta2');grid on; % PT模式下，theta2为-146~+146
subplot(3,2,3), plot(PT_t(3,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta3');grid on; % PT模式下，theta3为-149~+149
subplot(3,2,4), plot(PT_t(4,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta4');grid on; % PT模式下，theta4为-179~+179
subplot(3,2,5),plot(PT_t(5,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta5');grid on;  % PT模式下，theta5为-179~+179
subplot(3,2,6),plot(PT_t(6,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta6');grid on;  % PT模式下，theta6为-179~+179
%% 清楚多余数据，保留关键数据
save('PTdata.mat','PT_t','PT_c','TimeSize','Q');clear,clc;
load('PTdata.mat');