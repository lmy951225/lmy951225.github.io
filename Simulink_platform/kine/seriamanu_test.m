%seriamanu test
%���ڲ���JoLink��SerialManu�Ĵ����ͺ������÷�
%% ���˴���
%�����յ����˶��󣬻�����Ĭ�ϲ�������
% L1=JoLink();

%���ݲ�����������
% w=[0 1 1];
% r=[1 2 3];
% L2=JoLink('w',w,'r',r);
% v=[1 2 3];
% L3=JoLink('v',v);

%��������
% L4=JoLink(L2);

%% ����SerialManu(���������˶���)
%�����յĻ����ˣ�
% R1=SerialManu();

%���ݲ�������������
% L=[L2 L3 L4];
% T0=eye(4);
% R2=SerialManu(L,'T0',T0);

%���ƻ�����
% R3=SerialManu(R2);

%��DH���������Ļ�����ת��Ϊָ������ģ��
% mdl_puma560;
% p560p=dh2poe(p560);

%����XML�ļ����������˶���
%XML�ļ��ĸ�ʽ����puma560.xml
% p560x=xml2robot('puma560.xml');
%% ���˶�ѧ����
% mdl_puma560;
% p560p=dh2poe(p560);
% q=zeros(1,6);

% �����Ƕ������Ƿ���ȷ
% for i=1:6
%     q(i)=1;
%     Tp=p560p.fkinep(q);
%     T=double(p560.fkine(q));
%     T-Tp
% end

%�����,�ж������Ƿ���ȷ
% q1=rand(10,1)*2*pi-pi;
% q2=rand(10,1)*2*pi-pi;
% q3=rand(10,1)*2*pi-pi;
% q4=rand(10,1)*2*pi-pi;
% q5=rand(10,1)*2*pi-pi;
% q6=rand(10,1)*2*pi-pi;
% 
% for i=1:10
%     q=[q1(i) q2(i) q3(i) q4(i) q5(i) q6(i)];
%     Tp=p560p.fkinep(q);
%     T=double(p560.fkine(q));
%     T-Tp
% end

%% �ſɱȾ������
%�����ſ˱Ȳ���
% J1= p560.jacob0(qn);
% J2=p560p.jacobp(qn,'d');
% 
% J1= p560.jacobe(qn);
% J2=p560p.jacobp(qn,'t');
%
%��������
% q1=rand(10,1)*2*pi-pi;
% q2=rand(10,1)*2*pi-pi;
% q3=rand(10,1)*2*pi-pi;
% q4=rand(10,1)*2*pi-pi;
% q5=rand(10,1)*2*pi-pi;
% q6=rand(10,1)*2*pi-pi;
% for i=1:10
%     q=[q1(i) q2(i) q3(i) q4(i) q5(i) q6(i)];
%     J1= p560.jacob0(q);
%     J2=p560p.jacobp(q,'d');
%     J1-J2
%     J3= p560.jacobe(q);
%     J4=p560p.jacobp(q,'b');
%     J3-J4
% end


%% ��ֵ���������
%��������
% q1=rand(10,1)*2*pi-pi;
% q2=rand(10,1)*2*pi-pi;
% q3=rand(10,1)*2*pi-pi;
% q4=rand(10,1)*2*pi-pi;
% q5=rand(10,1)*2*pi-pi;
% q6=rand(10,1)*2*pi-pi;
% for i=1:10
%     q=[q1(i) q2(i) q3(i) q4(i) q5(i) q6(i)];
%     q0=q+rand(6,1)'/20;
%     Tg=p560p.fkinep(q);
%     qk=p560p.ikine_num_p(Tg,q0);
%     T=p560p.fkinep(qk)-Tg
% end

%% ur������
%�ض�λ�ð������֤
% mdl_ur5;
% UR5=dh2poe(ur5);
% T=UR5.fkinep([0.8 1.2 1.8 2.3 0.9 2.1]);
% qk=UR5.ikine_ur_p(T);
% for i=1:size(qk,1)
%     TG=UR5.fkinep(qk(i,:));
%     dis(i)=norm(TG(1:3,4)-T(1:3,4));
% end
% dis
%λ�������10^-16����

%����Ƕ�һ�����֤
%λ�������10^-15����
% mdl_ur5;
% UR5=dh2poe(ur5);
% q1=rand(10,1)*2*pi-pi;
% q2=rand(10,1)*2*pi-pi;
% q3=rand(10,1)*2*pi-pi;
% q4=rand(10,1)*2*pi-pi;
% q5=rand(10,1)*2*pi-pi;
% q6=rand(10,1)*2*pi-pi;
% for i=1:10
%     q=[q1(i) q2(i) q3(i) q4(i) q5(i) q6(i)];
%     q0=q+rand(6,1)'/200;
%     Tg=UR5.fkinep(q);
%     qk=UR5.ikine_ur_p(Tg,q0);
%     TG=UR5.fkinep(qk);
%     dis1(i)=norm(qk-q);
%     dis2(i)=norm(TG(1:3,4)-Tg(1:3,4));
% end