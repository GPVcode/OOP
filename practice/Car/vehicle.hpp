#include <string>
#include <iostream>

using namespace std;

class Vehicle{
    protected:
        string color;
        string model;
    public:
        Vehicle(string colorParam, string modelParam){
            color = colorParam;
            model = modelParam;
        }
        
        void startEngine(){
            cout << "Engine Started!" << endl;
        }
        void stopEngine(){
            cout << "Engine Stopped!" << endl;
        }

        void set_color(string input){
            color = input;
        }

        void set_model(string input){
            model = input;
        }
        string get_color(){
            return color;
        }

        string get_model(){
            return model;
        }
        
};