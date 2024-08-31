#include <iostream>
#include "vehicle.hpp"

using namespace std;

#ifndef CAR_HPP
#define CAR_HPP

class Car : public Vehicle{
    public:
        Car(string modelParam, string carColorParam) : Vehicle(modelParam, carColorParam){

        }
};

#endif