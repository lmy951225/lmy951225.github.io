clear;clc;close all;
%% ����������DH��������ʼ״̬Ϊ��ֱ״̬
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6');
%% ���ݸ�����ʼ�㣬�õ���ʼ��λ��
T1=[350,300,200,30,0,60];
%% ���ݸ�����ֹ�㣬�õ���ֹ��λ��
T2=[-200,250,350,0,0,60];
%% ������ʼ��λ�ˣ��õ���ʼ��ؽڽ�
A1=InverseSolver_MDH(T1);
a1=A1(1,1);a2=A1(1,2);a3=A1(1,3);a4=A1(1,4);a5=A1(1,5);a6=A1(1,6);
%% ������ֹ��λ�ˣ��õ���ֹ��ؽڽ�
B1=InverseSolver_MDH(T2);
b1=B1(5,1);b2=B1(5,2);b3=B1(5,3);b4=B1(5,4);b5=B1(5,5);b6=B1(5,6);
%% ��ÿ���ؽڽǵ���ζ���ʽ�岹�켣��
% �˶�ѧ���ε���ζ���ʽ�켣�滮������岹����n,һ�����ܳ���64
StopTime=10;FixedStep=0.2;n=0:FixedStep:StopTime;Cunt=length(n);
[q1,qd1,~] = Fivejtraj_Function([a1,b1],[0,StopTime],[0,0],[0,0],FixedStep); 
[q2,qd2,~] = Fivejtraj_Function([a2,b2],[0,StopTime],[0,0],[0,0],FixedStep);
[q3,qd3,~] = Fivejtraj_Function([a3,b3],[0,StopTime],[0,0],[0,0],FixedStep);
[q4,qd4,~] = Fivejtraj_Function([a4,b4],[0,StopTime],[0,0],[0,0],FixedStep);
[q5,qd5,~] = Fivejtraj_Function([a5,b5],[0,StopTime],[0,0],[0,0],FixedStep);
[q6,qd6,~] = Fivejtraj_Function([a6,b6],[0,StopTime],[0,0],[0,0],FixedStep);
qT=[q1;q2;q3;q4;q5;q6];
vT=[qd1;qd2;qd3;qd4;qd5;qd6];
%% ������
Q=qT';                                   %��ת��
T=robot.fkine(Q*pi/180);        %�����⣬�õ�ÿ�ζ�Ӧ�Ŀռ�λ�˾���
JTA=transl(T);                        %�ռ�λ�˾���ת��Ϊλ�þ���
rpy=tr2rpy(T,'xyz');                % T����ȡ��̬��rpy��
%% ����ĩ��λ��
W=[-1000,+1000,-1000,+1000,-1000,+1000];
plot3( JTA(1:end,1), JTA(1:end,2), JTA(1:end,3),'r');
axis(W);   %���������᷶Χ
hold on;grid on;
plot3(T1(1),T1(2),T1(3),'o','color','m');
plot3(T2(1),T2(2),T2(3),'o','color','c');
%% ���ж�̬��ʾ�鿴�ؽ�֮���Ƿ������桢��ײ�����������ؽڽǶȱ����ǻ���
robot.plot(Q*pi/180,'tilesize',150,'workspace',W); 
%% ��Ҫ���QP(��)��QV(��/��)��QT(����)�������ݾ���
%% ��������PVTģʽ�µ������������Ϊ64���岹���������ܳ���64
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
%% �鿴�ؽڽǶ��Ƿ񳬳����Ʒ�Χ�����������Χ�����ɵĹ켣����������ģ�һ������ʹ��
figure('numbertitle','on','name','�ؽڽ�λ����Ϣ')
subplot(3,2,1), plot(QP(1,1:Cunt),'.'),xlabel('t'),ylabel('theta1');grid on;    % PVTģʽ�£�theta1Ϊ-179~+179
subplot(3,2,2), plot(QP(2,1:Cunt),'.'),xlabel('t'),ylabel('theta2');grid on;    % PVTģʽ�£�theta2Ϊ-146~+146
subplot(3,2,3), plot(QP(3,1:Cunt),'.'),xlabel('t'),ylabel('theta3');grid on;    % PVTģʽ�£�theta3Ϊ-146~+146
subplot(3,2,4), plot(QP(4,1:Cunt),'.'),xlabel('t'),ylabel('theta4');grid on;    % PVTģʽ�£�theta4Ϊ-179~+179
subplot(3,2,5),plot(QP(5,1:Cunt),'.'),xlabel('t'),ylabel('theta5');grid on;     % PVTģʽ�£�theta5Ϊ-179~+179
subplot(3,2,6),plot(QP(6,1:Cunt),'.'),xlabel('t'),ylabel('theta6');grid on;     % PVTģʽ�£�theta6Ϊ-179~+179
%% �鿴�ؽ��ٶ��Ƿ񳬹�148�����������Χ�����ɵĹ켣����������ģ�һ������ʹ��
figure('numbertitle','on','name','�ؽڽ��ٶ���Ϣ')
subplot(3,2,1), plot(QV(1,1:Cunt),'.'),xlabel('t'),ylabel('QV1');grid on;
subplot(3,2,2), plot(QV(2,1:Cunt),'.'),xlabel('t'),ylabel('QV2');grid on;
subplot(3,2,3), plot(QV(3,1:Cunt),'.'),xlabel('t'),ylabel('QV3');grid on;
subplot(3,2,4), plot(QV(4,1:Cunt),'.'),xlabel('t'),ylabel('QV4');grid on;
subplot(3,2,5),plot(QV(5,1:Cunt),'.'),xlabel('t'),ylabel('QV5');grid on;
subplot(3,2,6),plot(QV(6,1:Cunt),'.'),xlabel('t'),ylabel('QV6');grid on;
figure('numbertitle','on','name','ʱ����Ϣ')
%% �鿴ʱ�����Ƿ񳬹�256ms�����������Χ�����ɵĹ켣����������ģ�һ������ʹ��
plot(QT(1,1:Cunt),'.'),xlabel('t'),ylabel('QT');grid on;
%% ����������ݣ������ؼ�����
save('PVTdata.mat','QP','QV','QT','Cunt','TimeSize','Q');clear,clc;
load('PVTdata.mat');