function [pos] = Interpolation(p1, p2, p3,step)
% ���������ռ�㣬�������Բ�ļ��뾶
% rad>0:   Բ��
% rad = -1:��������������
% rad = -2:���㹲��
center = 0; rad =0;
% ���ݼ��
% ������������ʽ�Ƿ���ȷ
if size(p1,2)~=3 || size(p2,2)~=3 || size(p3,2)~=3   %���ؾ���p������
    fprintf('�����ά�Ȳ�һ��\n');
    rad = -1;
    return;
end
n = size(p1,1);
if size(p2,1)~=n || size(p3,1)~=n     %���ؾ���p������
    fprintf('�����ά�Ȳ�һ��\n');
    rad = -1;
    return;
end

% ����p1��p2�ĵ�λ������p1��p3�ĵ�λ����
% �����Ƿ���ͬ
v1 = p2 - p1;
v2 = p3 - p1;
if find(norm(v1)==0) | find(norm(v2)==0) %#ok<OR2>  norm������
    fprintf('����㲻��һ��\n');rad = -1;return;
end
v1n = v1/norm(v1);
v2n = v2/norm(v2);

% ����Բƽ���ϵĵ�λ������
% ��������Ƿ���

% if find(sum(abs(nv),2)<1e-14)
%     fprintf('�����������ֱ��\n');rad = -1;return;
% end

% ����������ϵUVW��
u = v1n;
w = cross(v2,v1)/norm(cross(v2,v1));  %cross���������Ĳ��
% v = cross(w,u);
 v = cross(u,w);


% ����ͶӰ
bx = dot(v1,u);   %�ڻ�������dot(A,B)= A'*B���
cx = dot(v2,u);
cy = dot(v2,v);

% ����Բ��
h = ((cx - bx/2)^2 + cy^2 -(bx/2)^2)/(2*cy);
center = zeros(1,3);
center(1,:) = p1(1,:) + bx/2.*u(1,:) + h.*v(1,:);

% �뾶
rad = sqrt((center(1,1)-p1(1,1)).^2+(center(1,2)-p1(1,2)).^2+(center(1,3)-p1(1,3)).^2);

if rad>0
    pc = center;
    A = (p2(2)-p1(2))*(p3(3)-p2(3))-(p2(3)-p1(3))*(p3(2)-p2(2));
    B = (p2(3)-p1(3))*(p3(1)-p2(1))-(p2(1)-p1(1))*(p3(3)-p2(3));
    C = (p2(1)-p1(1))*(p3(2)-p2(2))-(p2(2)-p1(2))*(p3(1)-p2(1));
    K = sqrt(A^2+B^2+C^2);
    a = [A B C]/K;
    r = sqrt((p1(1)-pc(1))^2+(p1(2)-pc(2))^2+(p1(3)-pc(3))^2);
    n = (p1 -pc)/r;
    o = cross(a,n);
    T = [n' o' a' pc'; 0 0 0 1];

% ��ת����ĵ�
    q1 = inv(T)*[p1 1]';   %inv�������
    q2 = inv(T)*[p2 1]';
    q3 = inv(T)*[p3 1]';

% ����Ƕ�
    if q3(2)<0
        theta13 = atan2(q3(2),q3(1)) + 2*pi;
    else
        theta13 = atan2(q3(2),q3(1));
    end

    if q2(2)<0
        theta12 = atan2(q2(2),q2(1)) + 2*pi;
    else
        theta12 = atan2(q2(2),q2(1));
    end

    % �켣�岹
    count =1;
     for  ChaZhi= 0:theta13/step: theta13
         p_i(:,count) = T*[r*cos(ChaZhi) r*sin(ChaZhi) 0 1]';
         count = count+1;
     end
%      plot2(p_i,'b');
end

nv = cross(v1n,v2n);
 if all(nv==0)
    fprintf('�����㹲��\n');
    rad = -2;
    %return;
 end

if rad == -2
    
%   stepNum = round(sqrt((p3(1)-p1(1))^2+(p3(2)-p1(2))^2+(p3(3)-p1(3))^2)/step);
    p_i = zeros(4,step+1);
    
    dx=(p3(1)-p1(1))/step;
    dy=(p3(2)-p1(2))/step;
    dz=(p3(3)-p1(3))/step;

    for t=0:1:step
        p_i(1,t+1)=p1(1)+dx*t;
        p_i(2,t+1)=p1(2)+dy*t;
        p_i(3,t+1)=p1(3)+dz*t;
    end

end
pos(1,:) = p_i(1,:);pos(2,:) = p_i(2,:);pos(3,:) = p_i(3,:);

end