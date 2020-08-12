clear;clc;close all;
q_array=[30,60,40];%ָ����ֹλ��
t_array=[0,2,4];%ָ����ֹʱ��
v_array=[20,30,20];%ָ����ֹ�ٶ�
a_array=[2,4,2];%ָ����ֹ���ٶ�
t=t_array(1);q=q_array(1);v=v_array(1);a=a_array(1);%��ʼ״̬
for i=1:1:length(q_array)-1 %ÿһ�ι滮��ʱ��
     T=t_array(i+1)-t_array(i);
     a0=q_array(i);
     a1=v_array(i);
     a2=(q_array(i+1)-q_array(i))*3/(T^2)-(2*v_array(i)+v_array(i+1))/T;
     a3=(q_array(i)-q_array(i+1))*2/(T^3)+(v_array(i)+v_array(i+1))/(T^2);
     ti=t_array(i):0.02:t_array(i+1);
     qi=a0+a1*(ti-t_array(i))+a2*(ti-t_array(i)).^2+a3*(ti-t_array(i)).^3;
     vi=a1+2*a2*(ti-t_array(i))+3*a3*(ti-t_array(i)).^2;
     ai=2*a2+6*a3*(ti-t_array(i));
     t=[t,ti(2:end)];q=[q,qi(2:end)];v=[v,vi(2:end)];a=[a,ai(2:end)];
end
subplot(3,1,1),plot(t,q,'r'),xlabel('t'),ylabel('position');hold on;plot(t_array,q_array,'o','color','g'),grid on;
subplot(3,1,2),plot(t,v,'b'),xlabel('t'),ylabel('velocity');hold on;plot(t_array,v_array,'*','color','y'),grid on;
subplot(3,1,3),plot(t,a,'g'),xlabel('t'),ylabel('accelerate');hold on;plot(t_array,a_array,'^','color','r'),grid on;