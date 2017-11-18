#include "accelerometer.h"
#include <chrono>
#include <random>

Accelerometer::Accelerometer()
{
}

double Accelerometer::get_acceleration()
{
  // construct a trivial random generator engine from a time-based seed:
  long long seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::default_random_engine generator (seed);
  std::uniform_real_distribution<double> distribution(-this->error, this->error);
  return distribution(generator);
}
