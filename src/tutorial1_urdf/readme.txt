Hello!

To run this code, first make sure you put this package under the src folder of a catkin worskpace. If you don't know how to make a catkin workspace refer to: http://wiki.ros.org/catkin/Tutorials/create_a_workspace

Once you have put the package in the workspace, go to the root of your workspace. Once there, run "catkin_make" to build the package. You might need to install the joint_state_publisher package as it is a dependency.

After building, change directory to tutorial1_urdf/launch

Once there, run "roslaunch display.launch model:=urdf/test.urdf gui:=true"

Then you should be able to see the robot in Rviz. Initially nothing is visible, but load up the provided .rviz file from under the File menu. Once you do that , change the "Fixed Frame" tab under displays from "map" to "base_link". Once you do that, you should be able to see the robot. Play around with the values from the joint_state_publisher window and interact with the robot!

