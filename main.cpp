//
// Created by Hantao Zhong on 05/10/2019.
//
#include <iostream>
#include "pod.h"

int main()
{
    Pod pod;
    std::cout << "Name: " << pod.get_name() << std::endl;
    std::cout << "Maximum speed: " << pod.get_max_speed() << std::endl;
    std::cout << "Temperature: " << pod.get_temperature() << std::endl;
    std::cout << "Pressure: " << pod.get_pressure() << std::endl;
    return 0;
}
