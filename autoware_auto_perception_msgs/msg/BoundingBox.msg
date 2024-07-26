uint8 NO_LABEL = 0
uint8 CAR = 1
uint8 PEDESTRIAN = 2
uint8 CYCLIST = 3
uint8 MOTORCYCLE = 4
uint8 NO_SIGNAL = 0
uint8 LEFT_SIGNAL = 1
uint8 RIGHT_SIGNAL = 2
uint8 BRAKE = 3
uint32 POSE_X = 0
uint32 POSE_Y = 1
uint32 VELOCITY = 2
uint32 HEADING = 3
uint32 TURN_RATE = 4
uint32 SIZE_X = 5
uint32 SIZE_Y = 6
uint32 ACCELERATION = 7

geometry_msgs/Point32 centroid
geometry_msgs/Point32 size
autoware_auto_geometry_msgs/Quaternion32 orientation
float32 velocity
float32 heading
float32 heading_rate
geometry_msgs/Point32 corners
float32 variance
float32 value
uint8 vehicle_label
uint8 signal_label
float32 class_likelihood
