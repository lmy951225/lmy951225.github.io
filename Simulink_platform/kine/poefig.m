%����ָ������ʽ�Ļ������˶�ѧ����ƽ̨

%% ���ƻ������
%���ƿ��fig
set(0,'Units','pixels')
dim = get(0,'ScreenSize');
fig_1 = figure('doublebuffer','on','Position',[0,35,dim(3)-150,dim(4)-100],...
    'MenuBar','none','Name','POE Robot Drawing',...
    'NumberTitle','off');
hold on;

light    %�ƹ�                           
daspect([1 1 1])                   
view(135,25)   %�ӽ�
xlabel('X'),ylabel('Y'),zlabel('Z');
title('ָ���������˷���');
axis([-800 800 -800 800 -100 1100]);
%����ͼ�α߿� 
plot3([-800,800],[-800,-800],[-100,-100],'k')
plot3([-800,-800],[-800,800],[-100,-100],'k')
plot3([-800,-800],[-800,-800],[-100,1100],'k')
plot3([-800,800],[-800,-800],[1100,1100],'k')
plot3([-800,-800],[-800,800],[1100,1100],'k')
plot3([-800,-800],[800,800],[-100,1100],'k')

%������Ҫ������ 
kine = uipanel(fig_1,...
    'Position',[0.05 0.15 0.15 0.35],...
    'Title','�˶�ѧ','FontSize',11);

