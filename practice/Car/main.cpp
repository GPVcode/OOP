using namespace std;

#include <iostream>
#include "car.hpp"

int main(){
    Car myCar("black", "Toyota");

    myCar.startEngine();
    cout << "I am driving a " << myCar.get_color() << " " << myCar.get_model() << "." << endl;

    string type_of_car = "Honda";
    string car_color = "white";

    Car friendsCar(car_color, type_of_car);
    
    cout << "What car do you have?" << endl;
    cin >> type_of_car;
    friendsCar.set_model(type_of_car);
    cout << "What color is it?" << endl;
    cin >> car_color;
    friendsCar.set_color(car_color);

    cout << "So you drive a " << friendsCar.get_color() << " " << friendsCar.get_model() << ". Sweet ride!" << endl;
    
    return 0;
}