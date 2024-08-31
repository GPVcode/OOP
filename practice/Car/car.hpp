#include <iostream>
#include "vehicle.hpp"

using namespace std;

#ifndef CAR_HPP
#define CAR_HPP

class Car : public Vehicle{
    public:
        Car(string modelParam, string carColorParam) : Vehicle(modelParam, carColorParam){          // Inheriting constructor from base class(Vehicle)

        }
    void startEngine() override{
        cout << "The car has started!" << endl;
    }
    void stopEngine() override{
        cout << "The car has stopped!" << endl;
    }

    void honk() override{
        cout << "BEEP BEEP!" << endl;
    }
};

#endif