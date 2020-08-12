function [T] = kin_abb660(q)
%利用标准DH方法求解ABB_IRB660机器人的正运动学
T01=DHstd(0, 0,0.8,0);
T12=DHstd(-90,0.3,0,q(1));
T23=DHstd(0,1.28,0,-90+q(2));
T34=DHstd(0,1.35,0,90-q(2)+q(3));
T45=DHstd(-90,0.26,0,-q(3));
T56=DHstd(0,0,0.247,q(4));
T=T01*T12*T23*T34*T45*T56;
end

