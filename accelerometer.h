#ifndef HYPED_GIT_WSHOP_ACCELEROMETER_H
#define HYPED_GIT_WSHOP_ACCELEROMETER_H


class Accelerometer
{
  public:
    Accelerometer();
    double get_acceleration();

  private:
    /// TASK 7 (PERSON A) //////////////////////////////////////////////////////
    double error = 114514;
    ////////////////////////////////////////////////////////////////////////////
};


#endif //HYPED_GIT_WSHOP_ACCELEROMETER_H
