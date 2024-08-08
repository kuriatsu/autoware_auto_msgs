# All rights reserved.
cmake_minimum_required(VERSION 3.5)

### Export headers
project(autoware_auto_perception_msgs)

# Generate messages
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/BoundingBox.msg"
  "msg/BoundingBoxArray.msg"
  "msg/ClassifiedRoi.msg"
  "msg/ClassifiedRoiArray.msg"
  "msg/DetectedObject.msg"
  "msg/DetectedObjectKinematics.msg"
  "msg/DetectedObjects.msg"
  "msg/LookingTrafficSignal.msg"
  "msg/ObjectClassification.msg"
  "msg/PointClusters.msg"
  "msg/PointXYZIF.msg"
  "msg/PredictedObject.msg"
  "msg/PredictedObjectKinematics.msg"
  "msg/PredictedObjects.msg"
  "msg/PredictedPath.msg"
  "msg/Shape.msg"
  "msg/TrackedObject.msg"
  "msg/TrackedObjectKinematics.msg"
  "msg/TrackedObjects.msg"
  "msg/TrafficLight.msg"
  # "msg/TrafficLightRoi.msg"
  # "msg/TrafficLightRoiArray.msg"
  "msg/TrafficSignal.msg"
  "msg/TrafficSignalArray.msg"
  "msg/TrafficSignalStamped.msg"
  "msg/TrafficSignalWithJudge.msg"
  "msg/PredictedObjectUE.msg"
  DEPENDENCIES
  "autoware_auto_geometry_msgs"
  "geometry_msgs"
  "sensor_msgs"
  "std_msgs"
  "unique_identifier_msgs"
  ADD_LINTER_TESTS
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_package()
