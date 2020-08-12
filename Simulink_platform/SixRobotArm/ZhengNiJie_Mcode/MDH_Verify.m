clear,clc,close all;
%% ����������DH��������ʼ״̬Ϊ��ֱ״̬
L1=Link('d',144,'a',0,'alpha',0,'modified'); 
L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
L3=Link('d',0,'a',-264,'alpha',0,'modified');
L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
robot=SerialLink([L1 L2 L3 L4 L5 L6],'name','Arm6')
Theta=[0 0 0 0 0 0];
% Theta=[-30.0000  -58.2807   30.0000  -61.7193  -30.0000  -30.0000];
Theta=Theta/180*pi;                         %����ɻ���
forwarda=robot.fkine(Theta)             %���������α任����
W=[-1000,+1000,-1000,+1000,-1000,+1000];  %����������ķ�Χ
robot.plot(Theta,'tilesize',150,'workspace',W);  %��ʾ��ά����
robot.teach(forwarda,'rpy' )              %��ʾroll/pitch/yaw angles��GUI�ɵ�����