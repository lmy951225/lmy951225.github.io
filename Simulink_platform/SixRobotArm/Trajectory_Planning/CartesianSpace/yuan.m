function [pos]=yuan(n,r,c,StepSize)
% n=[1 1 1]; %������n
% r=1; %Բ�İ뾶Ϊ1
% c=[1 1 1]; %Բ�ĵ�����
theta=(0:2*pi/StepSize:2*pi)'; %theta�Ǵ�0��2*pi
a=cross(n,[1 0 0]); %n��i��ˣ���ȡa����
if ~any(a) %���aΪ����������n��j���
    a=cross(n,[0 1 0]);
end
b=cross(n,a); %��ȡb����
a=a/norm(a); %��λ��a����
b=b/norm(b); %��λ��b����

c1=c(1)*ones(size(theta,1),1);
c2=c(2)*ones(size(theta,1),1);
c3=c(3)*ones(size(theta,1),1);

x=c1+r*a(1)*cos(theta)+r*b(1)*sin(theta);%Բ�ϸ����x����
y=c2+r*a(2)*cos(theta)+r*b(2)*sin(theta);%Բ�ϸ����y����
z=c3+r*a(3)*cos(theta)+r*b(3)*sin(theta);%Բ�ϸ����z����

plot3(x,y,z)

% xlabel('x��')
% ylabel('y��')
% zlabel('z��')
pos=[x,y,z];
end