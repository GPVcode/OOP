using namespace std;

#include <iostream>
#include "car.hpp"

int main(){
    
    Vehicle* myVehicle = new Car("silver", "Lambo");
    Vehicle* friendsCar = new Car("blue", "Toyota");
    Vehicle* friendsCar2 = new Car("blue", "Lambo");

    myVehicle -> startEngine();
    cout << "Behold! My prized " << myVehicle -> get_color() << " " << myVehicle ->get_model() << "!" << endl;

    string type_of_car;
    string car_color;

    cout << "What car do you have?" << endl;
    cin >> type_of_car;
    friendsCar -> set_model(type_of_car);
    cout << "What color is it?" << endl;
    cin >> car_color;
    friendsCar -> set_color(car_color);
    cout << "So you drive a " << friendsCar -> get_color() << " " << friendsCar -> get_model() << ". Sweet ride!" << endl;

    cout << "And you, what color is your car?" << endl;
    cin >> car_color;
    friendsCar2 -> set_color(car_color);
    cout << "What kind of car is it?" << endl;
    cin >> type_of_car;
    friendsCar2 -> set_model(type_of_car);

    cout << "You drive a " << friendsCar2 -> get_color() << " " << friendsCar2 -> get_model() << ". That's a good one!" << endl;

    delete myVehicle;
    delete friendsCar;
    delete friendsCar2;

    return 0;
}