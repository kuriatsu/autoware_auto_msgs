#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "autoware_auto_msgs/msg/PredictedObjects.hpp"
#include "unique_identifier_msgs/msg/UUID.hpp"
#include "autoware_auto_msgs/msg/PredictedObject.hpp"
#include "autoware_auto_msgs/msg/PredictedObjectKinematics.hpp"
#include "autoware_auto_msgs/msg/Shape.hpp"
#include "autoware_auto_msgs/msg/PredictedPath.hpp"
#include "geometry_msgs/msg/PoseWithCovariance.hpp"
#include "geometry_msgs/msg/Pose.hpp"
#include "geometry_msgs/msg/PoseArray.hpp"

class SubPredictedObjects : public rclcpp::Node {
    public:
        SubPredictedObjects();

    private:
        void objects_cb(const autoware_auto_msgs::msg::PredictedObjects::SharedPtr in_msg);

        rclcpp::Publisher<geometry_msgs::msg::PoseArray>::SharedPtr pub_pose_;
        rclcpp::Subscription<autoware_auto_msgs::msg::PredictedObjects>::SharedPtr sub_objects_;


};

SubPredictedObjects::SubPredictedObjects() : Node("sub_predicted_objects_node") {
    sub_objects_ = this->create_subscription<autoware_auto_msgs::msg::PredictedObjects>("/perception/Objects", 10, std::bind(&SubPredictedObjects::objects_cb, this, _1));
    pub_pose_ = this->create_subscription<geometry_msgs::msg::PoseArray>("/ue5/object_poses", 10);
}

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SubPredictedObjects>());
    rclcpp::shutdown();
    return 0;
}
