#ifndef HIGHWAY_PLANNER_H
#define HIGHWAY_PLANNER_H

#include <uWS/uWS.h>

#include <vector>

namespace highway_planner {

using std::vector;

class HighwayPlanner {
 public:
  HighwayPlanner();
  void operator()(uWS::WebSocket<uWS::SERVER> ws, char *data, size_t length,
                  uWS::OpCode opCode);

 private:
  // Car's lane. Starting at middle lane.
  int lane_;

  // Reference velocity.
  double ref_vel_;

  vector<double> map_waypoints_x_;
  vector<double> map_waypoints_y_;
  vector<double> map_waypoints_s_;
  vector<double> map_waypoints_dx_;
  vector<double> map_waypoints_dy_;

};  // end HighwayPlanner class

}  // end namespace

#endif  // HIGHWAY_PLANNER_H