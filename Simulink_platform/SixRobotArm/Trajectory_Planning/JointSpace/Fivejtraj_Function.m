function [q,v,a,t] = Fivejtraj_Function(q_array, t_array, v_array, a_array,FixedStep)  
%q_arrayΪ2x1�ľ��󣬵�һ������ʾ�ؽڽǵ���ʼֵ���ڶ���������ʾ��ֵֹ
%t_arrayΪ2x1�ľ��󣬵�һ������ʾ��ʼʱ��Ϊ0���ڶ���������ʾ����ʱ��
%v_arrayΪ2x1�ľ���Ĭ����Ϊ[0 0]
% a_arrayΪ2x1�ľ���Ĭ����Ϊ[0 0]
     a0 = [0 0 0 0 0];
     a1 = [0 0 0 0 0];
     a2 = [0 0 0 0 0];
     a3 = [0 0 0 0 0];
     a4 = [0 0 0 0 0];
     a5 = [0 0 0 0 0];
    t=t_array(1);q=q_array(1);v=v_array(1);a=a_array(1);%�Գ�ʼʱ�䣬λ�ã��ٶȣ����ٶȸ�ֵ
    for i=1:1:length(q_array)-1 %ÿһ�ι滮��ʱ��
         T=t_array(i+1)-t_array(i);
         a0(i)=q_array(i);
         a1(i)=v_array(i);
         a2(i)=a_array(i)/2;
         a3(i)=(20*q_array(i+1)-20*q_array(i)-(8*v_array(i+1)+12*v_array(i))*T-(3*a_array(i)-a_array(i+1))*T^2)/(2*T^3);
         a4(i)=(30*q_array(i)-30*q_array(i+1)+(14*v_array(i+1)+16*v_array(i))*T+(3*a_array(i)-2*a_array(i+1))*T^2)/(2*T^4);
         a5(i)=(12*q_array(i+1)-12*q_array(i)-(6*v_array(i+1)+6*v_array(i))*T-(a_array(i)-a_array(i+1))*T^2)/(2*T^5);%������ζ���ʽϵ�� 
         ti=t_array(i):FixedStep:t_array(i+1);
         qi=a0(i)+a1(i)*(ti-t_array(i))+a2(i)*(ti-t_array(i)).^2+a3(i)*(ti-t_array(i)).^3+a4(i)*(ti-t_array(i)).^4+a5(i)*(ti-t_array(i)).^5;
         vi=a1(i)+2*a2(i)*(ti-t_array(i))+3*a3(i)*(ti-t_array(i)).^2+4*a4(i)*(ti-t_array(i)).^3+5*a5(i)*(ti-t_array(i)).^4;
         ai=2*a2(i)+6*a3(i)*(ti-t_array(i))+12*a4(i)*(ti-t_array(i)).^2+20*a5(i)*(ti-t_array(i)).^3;
         t=[t,ti(2:end)];q=[q,qi(2:end)];v=[v,vi(2:end)];a=[a,ai(2:end)];
    end
end