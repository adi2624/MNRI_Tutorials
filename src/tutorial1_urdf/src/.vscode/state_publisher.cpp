#include <string>
#include <ros/ros.h>
#include <sensor_msgs/JointState.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char **argv){
    ros::init(argc,argv,"state_publisher"); // name the node as state publisher
    ros::NodeHandle n;
    ros::Publisher joint_pub = n.advertise<sensor_msgs::JointState>("joint_states",1);  // Publish state to topic joint_states
    tf::TransformBroadcaster broadcaster;
    ros::Rate loop(30); // 30 msgs/sec

    const double degree = M_PI/180;

    double inc = 0.005, base_arm_inc = 0.005, arm1_armbase_inc = 0.005,
    arm2_arm1_inc = 0.005, gripper_inc = 0.005, tip_inc = 0.005;

    double angle = 0, base_arm = 0, arm1_armbase = 0, arm2_arm1 = 0, gripper = 0, tip = 0;

    geometry_msgs::TransformStamped odom_trans;
    sensor_msgs::JointState joint_state;
    odom_trans.header.frame_id = "odom";
    odom_trans.child_frame_id = "base_link";
    
    while(ros::ok()){

        joint_state.header.stamp = ros::Time::now();
        joint_state.name.resize(7);
        joint_state.position.resize(7);
        joint_state.name[0] = "base_to_arm_base";
        joint_state.position[0] = base_arm;


    }

}