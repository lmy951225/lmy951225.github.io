clear,clc,close all;
p1=[-300,200,200];
p2=[0,200,300];
p3=[300,200,400];
step=30;  
p_i = zeros(4,step+1);
dx=(p3(1)-p1(1))/step;
dy=(p3(2)-p1(2))/step;
dz=(p3(3)-p1(3))/step;
for t=0:1:step
    p_i(1,t+1)=p1(1)+dx*t;
    p_i(2,t+1)=p1(2)+dy*t;
    p_i(3,t+1)=p1(3)+dz*t;
end
pos(1,:) = p_i(1,:);pos(2,:) = p_i(2,:);pos(3,:) = p_i(3,:);
T=pos';
plot3(T(1:end,1),T(1:end,2),T(1:end,3),'.','color','k');
grid on;hold on;
plot3(p1(1),p1(2),p1(3),'o','color','m');
plot3(p2(1),p2(2),p2(3),'o','color','c');
plot3(p3(1),p3(2),p3(3),'o','color','r');