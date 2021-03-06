clear,clc,close all;
p1=[320,250,200];p2=[-230,-320,350];p3=[89,-439,181];step=100;  %空间小半径大圆弧
center = 0; rad =0;
% 计算p1到p2的单位向量和p1到p3的单位向量
% 检查点是否相同
v1 = p2 - p1;
v2 = p3 - p1;
if find(norm(v1)==0) | find(norm(v2)==0) %#ok<OR2>  norm矩阵范数
    fprintf('输入点不能一样\n');rad = -1;return;
end
v1n = v1/norm(v1);
v2n = v2/norm(v2);

% 计算圆平面上的单位法向量
% 检查三点是否共线

% if find(sum(abs(nv),2)<1e-14)
%     fprintf('三点过于趋近直线\n');rad = -1;return;
% end

% 计算新坐标系UVW轴
u = v1n;
w = cross(v2,v1)/norm(cross(v2,v1));  %cross两个向量的叉乘
v = cross(u,w);

% 计算投影
bx = dot(v1,u);   %内积函数，dot(A,B)= A'*B点乘
cx = dot(v2,u);
cy = dot(v2,v);

% 计算圆心
h = ((cx - bx/2)^2 + cy^2 -(bx/2)^2)/(2*cy);
center = zeros(1,3);
center(1,:) = p1(1,:) + bx/2.*u(1,:) + h.*v(1,:);

% 半径
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

% 求转换后的点
    q1 = inv(T)*[p1 1]';   %inv矩阵的逆
    q2 = inv(T)*[p2 1]';
    q3 = inv(T)*[p3 1]';

% 计算角度
    if q2(2)<0
        theta12 = atan2(q2(2),q2(1)) + 2*pi;
    else
        theta12 = atan2(q2(2),q2(1));
    end
    if q3(2)<0
        theta13 = atan2(q3(2),q3(1)) + 2*pi;
    else
        theta13 = atan2(q3(2),q3(1));
    end
    % 轨迹插补
    count =1;
     for  ChaZhi= 0:theta13/step: theta13
         p_i(:,count) = T*[r*cos(ChaZhi) r*sin(ChaZhi) 0 1]';
         count = count+1;
     end
end
 pos(1,:) = p_i(1,:);pos(2,:) = p_i(2,:);pos(3,:) = p_i(3,:);
T=pos';
TQ=transl(T);
plot3(T(1:end,1),T(1:end,2),T(1:end,3),'.','color','k');  % plot2(T,'b');
grid on;
hold on;
plot3(p1(1),p1(2),p1(3),'o','color','m');
plot3(p2(1),p2(2),p2(3),'o','color','c');
plot3(p3(1),p3(2),p3(3),'o','color','r');