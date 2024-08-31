#include <string>
#include <iostream>

using namespace std;

class Vehicle{
    public:
        // constructor initializor list - initializes values in our attributes.            
        Vehicle(string colorParam, string modelParam) : color(colorParam), model(modelParam) {

        }
        
        virtual void startEngine() = 0;
        virtual void stopEngine() = 0;

        virtual void honk(){
            cout << "HONK!" << endl;
        }

        virtual void set_color(string input){
            color = input;
        }

        virtual void set_model(string input){
            model = input;
        }
        virtual string get_color() const{
            return color;
        }

        virtual string get_model() const{
            return model;
        }

        virtual ~Vehicle(){}

    protected:
        string color;
        string model;

};