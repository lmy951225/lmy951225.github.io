clear;clc,close all;
%% ����������DH��������ʼ״̬Ϊ��ֱ״̬
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6');
StepSize=100;
Q=zeros(StepSize+1,6);                     %���ڱ���������ֵ,QΪ(step+1)x6�ľ���
 n=[0 0 1]; %������n
 r=150; %Բ�İ뾶Ϊ1
 c=[300 300 200]; %Բ�ĵ�����

pos = yuan(n, r, c,StepSize);    %posΪ3x(step+1)�ľ���
T=pos; 

%% ����⣬�������йؽڽǱ仯����С��һ���
for i=1:StepSize+1
    if i==1
%% ����[50,0,100,-20,-90,0]ѡ�����õ��ĹؽڽǱ仯����С��һ���
        Q(i,:)=InverseSolver_MDH_ZY([T(i,:),0,0,180],zeros(1,6));
    else
        Q(i,:)=InverseSolver_MDH_ZY([T(i,:),0,0,180],Q(i-1,:));
    end
end
W=[-1000,+1000,-1000,+1000,-1000,+1000];
plot3(T(1:end,1),T(1:end,2),T(1:end,3),'r');
axis(W);   %���������᷶Χ
hold on;grid on;
robot.plot(Q*pi/180,'tilesize',150,'workspace',W); 
figure
PT_t=Q';Gain=1;
subplot(3,2,1), plot(PT_t(1,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta1');grid on; % PTģʽ�£�theta1Ϊ-179~+179
subplot(3,2,2), plot(PT_t(2,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta2');grid on; % PTģʽ�£�theta2Ϊ-146~+146
subplot(3,2,3), plot(PT_t(3,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta3');grid on; % PTģʽ�£�theta3Ϊ-149~+149
subplot(3,2,4), plot(PT_t(4,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta4');grid on; % PTģʽ�£�theta4Ϊ-179~+179
subplot(3,2,5),plot(PT_t(5,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta5');grid on;  % PTģʽ�£�theta5Ϊ-179~+179
subplot(3,2,6),plot(PT_t(6,1:StepSize+1)/Gain,'.'),xlabel('t'),ylabel('theta6');grid on;  % PTģʽ�£�theta6Ϊ-179~+179
