#ifndef HYPED_GIT_WSHOP_NAVIGATION_H
#define HYPED_GIT_WSHOP_NAVIGATION_H

#include <vector>

#include "accelerometer.h"


class Navigation
{
  public:
    Navigation();
    ~Navigation();

    void add_accelerometer(Accelerometer* a);
    double get_acceleration();
    double get_velocity();
    double get_position();

  private:
    std::vector<Accelerometer*> accelerometers;
    double velocity = 0;
    double position = 0;
};


#endif //HYPED_GIT_WSHOP_NAVIGATION_H
