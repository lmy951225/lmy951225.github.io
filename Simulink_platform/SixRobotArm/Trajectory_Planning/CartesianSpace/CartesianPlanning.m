clear;clc,close all;
%% ����������DH��������ʼ״̬Ϊ��ֱ״̬
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6');
%% ��������ĩ�˵Ŀռ�λ�� ������ο�ֵ
StepSize_Simulation=100;StepSize_RealControl=1000; %����岹����,ʵ�ʿ��ƵĲ岹�������ܳ���2480
Step=[StepSize_Simulation,StepSize_RealControl];TimeSize=10;Num=1;           %ͨ��Numȷ�����滹��ʵ�ʲ岹����
% p1=[150,200,250];p2=[200,250,300];p3=[300,350,400];StepSize=Step(Num);   %�ռ�ֱ��
% p1=[-300,200,200];p2=[0,200,300];p3=[300,200,400];StepSize=Step(Num);     % �ռ�ֱ��
p1=[320,250,200];p2=[-230,-320,350];p3=[89,-439,181];StepSize=Step(Num);    %�ռ�С�뾶��Բ��
%% ����ֱ�߲岹��Բ���岹�������߲岹�ж�
pos = Interpolation(p1, p2, p3,StepSize);    %posΪ3x(step+1)�ľ���
T=pos';                                       %��ת�ã�TΪ(step+1)x3�ľ���
JTA=transl(T);                              %���ռ�λ��ת��Ϊλ�þ���
Q=zeros(StepSize+1,6);                     %���ڱ���������ֵ,QΪ(step+1)x6�ľ���
%% ����⣬�������йؽڽǱ仯����С��һ���
for i=1:StepSize+1
    if i==1
%% ����[50,0,100,-20,-90,0]ѡ�����õ��ĹؽڽǱ仯����С��һ���
        Q(i,:)=InverseSolver_MDH_ZY([T(i,:),0,0,180],[50,0,100,-20,-90,0]);
    else
        Q(i,:)=InverseSolver_MDH_ZY([T(i,:),0,0,180],Q(i-1,:));
    end
end
W=[-1000,+1000,-1000,+1000,-1000,+1000];
plot3(T(1:end,1),T(1:end,2),T(1:end,3),'r');
axis(W);   %���������᷶Χ
hold on;grid on;
plot3(p1(1),p1(2),p1(3),'o','color','m');
plot3(p2(1),p2(2),p2(3),'o','color','c');
plot3(p3(1),p3(2),p3(3),'o','color','b');
%% ���ж�̬��ʾ�鿴�ؽ�֮���Ƿ������桢��ײ�����������ؽڽǶȱ����ǻ���
if Num==1
    robot.plot(Q*pi/180,'tilesize',150,'workspace',W); 
end
%% ��Ҫ���PT_t(��)���ݾ���PT_c(�岹����+1)
%% ��������PTģʽ�µ������������Ϊ2460���岹���������ܳ���2460
PT_t = zeros(6,2460);           %�����ؽڵĽǶȣ��岹��������Ϊ2460
PT_c = StepSize+1;             % �켣����
QS_T = Q';                          %��ת�ã�QS_TΪ8x(step+1)�ľ���
Gain=100;                           %���͸��������ķŴ�ϵ��������ݾ��ȣ����ɸ���Ĭ��Ϊ100
for i = 1:PT_c
    PT_t(1,i) = QS_T(1,i)*Gain;   
    PT_t(2,i) = QS_T(2,i)*Gain;
    PT_t(3,i) = QS_T(3,i)*Gain;     
    PT_t(4,i) = QS_T(4,i)*Gain;
    PT_t(5,i) = QS_T(5,i)*Gain;
    PT_t(6,i) = QS_T(6,i)*Gain;
end
%% ����֤�Ƿ񳬳����Ʒ�Χ���ڶ�̬���濴�ؽ�֮���Ƿ������桢��ײ�����
% �鿴�ؽڽǶ��Ƿ���ͻ�䲢�Ҳ�Ҫ�������Ʒ�Χ���������ͻ���ʾ�����ɵĹ켣����������ģ����������µĹ켣
figure
subplot(3,2,1), plot(PT_t(1,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta1');grid on; % PTģʽ�£�theta1Ϊ-179~+179
subplot(3,2,2), plot(PT_t(2,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta2');grid on; % PTģʽ�£�theta2Ϊ-146~+146
subplot(3,2,3), plot(PT_t(3,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta3');grid on; % PTģʽ�£�theta3Ϊ-149~+149
subplot(3,2,4), plot(PT_t(4,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta4');grid on; % PTģʽ�£�theta4Ϊ-179~+179
subplot(3,2,5),plot(PT_t(5,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta5');grid on;  % PTģʽ�£�theta5Ϊ-179~+179
subplot(3,2,6),plot(PT_t(6,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta6');grid on;  % PTģʽ�£�theta6Ϊ-179~+179
%% ����������ݣ������ؼ�����
save('PTdata.mat','PT_t','PT_c','TimeSize','Q');clear,clc;
load('PTdata.mat');