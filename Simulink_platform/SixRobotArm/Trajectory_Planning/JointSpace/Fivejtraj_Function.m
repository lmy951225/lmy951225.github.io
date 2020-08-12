function [q,v,a,t] = Fivejtraj_Function(q_array, t_array, v_array, a_array,FixedStep)  
%q_array为2x1的矩阵，第一参数表示关节角的起始值，第二个参数表示终止值
%t_array为2x1的矩阵，第一参数表示起始时间为0，第二个参数表示结束时间
%v_array为2x1的矩阵，默认设为[0 0]
% a_array为2x1的矩阵，默认设为[0 0]
     a0 = [0 0 0 0 0];
     a1 = [0 0 0 0 0];
     a2 = [0 0 0 0 0];
     a3 = [0 0 0 0 0];
     a4 = [0 0 0 0 0];
     a5 = [0 0 0 0 0];
    t=t_array(1);q=q_array(1);v=v_array(1);a=a_array(1);%对初始时间，位置，速度，加速度赋值
    for i=1:1:length(q_array)-1 %每一段规划的时间
         T=t_array(i+1)-t_array(i);
         a0(i)=q_array(i);
         a1(i)=v_array(i);
         a2(i)=a_array(i)/2;
         a3(i)=(20*q_array(i+1)-20*q_array(i)-(8*v_array(i+1)+12*v_array(i))*T-(3*a_array(i)-a_array(i+1))*T^2)/(2*T^3);
         a4(i)=(30*q_array(i)-30*q_array(i+1)+(14*v_array(i+1)+16*v_array(i))*T+(3*a_array(i)-2*a_array(i+1))*T^2)/(2*T^4);
         a5(i)=(12*q_array(i+1)-12*q_array(i)-(6*v_array(i+1)+6*v_array(i))*T-(a_array(i)-a_array(i+1))*T^2)/(2*T^5);%计算五次多项式系数 
         ti=t_array(i):FixedStep:t_array(i+1);
         qi=a0(i)+a1(i)*(ti-t_array(i))+a2(i)*(ti-t_array(i)).^2+a3(i)*(ti-t_array(i)).^3+a4(i)*(ti-t_array(i)).^4+a5(i)*(ti-t_array(i)).^5;
         vi=a1(i)+2*a2(i)*(ti-t_array(i))+3*a3(i)*(ti-t_array(i)).^2+4*a4(i)*(ti-t_array(i)).^3+5*a5(i)*(ti-t_array(i)).^4;
         ai=2*a2(i)+6*a3(i)*(ti-t_array(i))+12*a4(i)*(ti-t_array(i)).^2+20*a5(i)*(ti-t_array(i)).^3;
         t=[t,ti(2:end)];q=[q,qi(2:end)];v=[v,vi(2:end)];a=[a,ai(2:end)];
    end
end