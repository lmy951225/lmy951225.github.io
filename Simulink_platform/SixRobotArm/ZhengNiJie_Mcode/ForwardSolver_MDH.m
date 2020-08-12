function    [T06,Pos]=ForwardSolver_MDH(theta)
%% 建立机器人DH参数，初始状态为竖直状态
%% L1=Link('d',144,'a',0,'alpha',0,'modified'); 
%% L2=Link('d',0,'a',0,'alpha',pi/2,'offset',-pi/2,'modified');
%% L3=Link('d',0,'a',-264,'alpha',0,'modified');
%% L4=Link('d',106,'a',-236,'alpha',0,'offset',-pi/2,'modified');
%% L5=Link('d',114,'a',0,'alpha',pi/2,'modified');
%% L6=Link('d',67,'a',0,'alpha',-pi/2,'modified');
    %% [alpha,a, d,offset]  ******DH参数*****
    DH_JXB =[0 0 144 0; 
                    90 0 0 -90;
                    0 -264 0 0; 
                    0 -236 106 -90; 
                    90 0 114 0; 
                    -90 0 67 0];
    d=DH_JXB(1:6,3); 
    a0=DH_JXB(1,2); a1=DH_JXB(2,2);a2=DH_JXB(3,2);a3=DH_JXB(4,2);a4=DH_JXB(5,2); a5=DH_JXB(6,2); 
    DH_JXB(1:6,1)=DH_JXB(1:6,1)/180*pi;
    alp0=DH_JXB(1,1); alp1=DH_JXB(2,1);alp2=DH_JXB(3,1);alp3=DH_JXB(4,1);alp4=DH_JXB(5,1); alp5=DH_JXB(6,1);
    offset=[0 -90 0 -90 0 0];
    theta=(theta+offset)*pi/180;
    theta1=theta(1);theta2=theta(2);theta3=theta(3);theta4=theta(4);theta5=theta(5);theta6=theta(6);
    T01=[               cos(theta1),             -sin(theta1),             0,               a0;
                   sin(theta1)*cos(alp0), cos(theta1)*cos(alp0),-sin(alp0),-d(1)*sin(alp0);
                   sin(theta1)*sin(alp0),  cos(theta1)*sin(alp0), cos(alp0), d(1)*cos(alp0);
                                0,                                  0,                    0,               1
             ];
    T12=[               cos(theta2),              -sin(theta2),           0,             a1;
                  sin(theta2)*cos(alp1), cos(theta2)*cos(alp1),-sin(alp1),-d(2)*sin(alp1);
                  sin(theta2)*sin(alp1),  cos(theta2)*sin(alp1),  cos(alp1), d(2)*cos(alp1);
                                0,                                  0,                  0,               1
            ];
    T23=[               cos(theta3),             -sin(theta3),            0,            a2;
                 sin(theta3)*cos(alp2), cos(theta3)*cos(alp2),-sin(alp2),-d(3)*sin(alp2);
                 sin(theta3)*sin(alp2),  cos(theta3)*sin(alp2),  cos(alp2), d(3)*cos(alp2);
                                0,                              0,                      0,               1
            ];
    T34=[              cos(theta4),             -sin(theta4),            0,              a3;
                sin(theta4)*cos(alp3), cos(theta4)*cos(alp3),-sin(alp3),-d(4)*sin(alp3);
                sin(theta4)*sin(alp3),  cos(theta4)*sin(alp3),  cos(alp3), d(4)*cos(alp3);
                               0,                               0,                     0,                1
            ];
    T45=[            cos(theta5),             -sin(theta5),              0,              a4;
               sin(theta5)*cos(alp4), cos(theta5)*cos(alp4),-sin(alp4),-d(5)*sin(alp4);
               sin(theta5)*sin(alp4),  cos(theta5)*sin(alp4), cos(alp4), d(5)*cos(alp4);
                               0,                               0,                     0,               1
            ];
    T56=[           cos(theta6),            -sin(theta6),               0,              a5;
              sin(theta6)*cos(alp5), cos(theta6)*cos(alp5),-sin(alp5),-d(6)*sin(alp5);
              sin(theta6)*sin(alp5),  cos(theta6)*sin(alp5),  cos(alp5), d(6)*cos(alp5);
                              0,                                0,                    0,                 1
            ];
    disp('Homogeneous transformation matrix T06:')
    T06=T01*T12*T23*T34*T45*T56;
    %% 求末端位置
    X=T06(1,4);Y=T06(2,4);Z=T06(3,4);
    %% 求末端姿态Rotations about X, Y, Z axes (for a robot gripper)
    R=T06;
    if abs(abs(R(1,3)) - 1) < eps  % when |R13| == 1
        % singularity
        rpy(1) = 0;  % roll is zero
        if R(1,3) > 0
        rpy(3) = atan2( R(3,2), R(2,2));   % R+Y
        else
             rpy(3) = -atan2( R(2,1), R(3,1));   % R-Y
        end
        rpy(2) = asin(R(1,3));
    else
        rpy(1) = -atan2(R(1,2), R(1,1));
        rpy(3) = -atan2(R(2,3), R(3,3));

        rpy(2) = atan(R(1,3)*cos(rpy(1))/R(1,1));
    end
    RPY=rpy*180/pi;
    Rall=RPY(1);Pitch=RPY(2);Yaw=RPY(3);
    Pos=[X,Y,Z,Rall,Pitch,Yaw];
end