# All rights reserved.
cmake_minimum_required(VERSION 3.5)

### Export headers
project(autoware_auto_planning_msgs)

# Generate messages
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/PlannerCostmap.action"
  "action/PlanTrajectory.action"
  "action/RecordTrajectory.action"
  "action/ReplayTrajectory.action"
  "msg/HADMapRoute.msg"
  "msg/OrderMovement.msg"
  "msg/Route.msg"
  "msg/Trajectory.msg"
  "msg/TrajectoryPoint.msg"
  "msg/Path.msg"
  "msg/PathPoint.msg"
  "msg/PathWithLaneId.msg"
  "msg/PathPointWithLaneId.msg"
  "srv/ModifyTrajectory.srv"
  DEPENDENCIES
    "autoware_auto_geometry_msgs"
    "autoware_auto_mapping_msgs"
    "builtin_interfaces"
    "action_msgs"
    "geometry_msgs"
    "nav_msgs"
    "std_msgs"
  ADD_LINTER_TESTS
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package()
