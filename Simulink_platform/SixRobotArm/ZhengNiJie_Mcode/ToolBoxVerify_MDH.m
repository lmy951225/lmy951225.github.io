clear,clc,close all;
%% ����������DH��������ʼ״̬Ϊ��ֱ״̬
% ����ƫ��d,���˳���a,����Ťת��alpha
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6');
%% ���⣬�����ؽڽǣ���ĩ��λ�ˣ�����
% Theta = [0 0 0 0 0 0];  %����6���ؽڽǶ�ֵ
% Theta=[30 30 30 30 30 30];
% Theta=[-30 -30 -30 -30 -30 -30];
% [T60,Pos]=ForwardSolver_MDH(Theta)        % Pos=[X,Y,Z,Rall,Pitch,Yaw];
%% ��⣬����ĩ��λ����ؽڽǣ�(X,Y,Z��λΪmm)��(Rall,Pitch,Yaw��λΪdeg)
Pos=[308.0304 -367.2397  524.1307   43.8979  -25.6589   56.3099];             %����ĩ��λ��
% Pos=[300 400 300 0 0 0];
AllSloverTheta=InverseSolver_MDH(Pos)    %����ĩ��λ�������н�
Theta=AllSloverTheta(1,1:end)                      %ѡ���һ��⣬PTP������Ĭ��Ϊ��һ���
%% ��֤�����Ľ��
Theta=Theta/180*pi;                         %����ɻ���
forwarda=robot.fkine(Theta)             %���������α任����
W=[-1000,+1000,-1000,+1000,-1000,+1000];%����������ķ�Χ
robot.plot(Theta,'tilesize',150,'workspace',W);  %��ʾ��ά����
q1=robot.ikine(forwarda)*180/pi      %�������֤�ؽڽ�
rpy=tr2rpy(forwarda, 'xyz')*180/pi    %��ĩ����̬�����߷���Ϊ��XYZ����ת
robot.teach(forwarda,'rpy' )              %��ʾroll/pitch/yaw angles��GUI�ɵ�����

Qua=UnitQuaternion(forwarda)