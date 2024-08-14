#include <iostream>
// using namespace std;

class employee{
    public:
        std::string name;
        std::string position;
        std::string hobby;
    void introduction(){
        std::cout << "Hello, my name is " << name << ". I am the new " << position << ". My favorite hobby is " << hobby << "." << std::endl;
    };
};

int main(){
    employee newEmployee1;
    newEmployee1.name = "Gabriel V";
    newEmployee1.position = "Software Engineer";
    newEmployee1.hobby = "cooking";
    newEmployee1.introduction();

    employee newEmployee2;
    newEmployee2.name = "Christine N";
    newEmployee2.position = "Attorney";
    newEmployee2.hobby = "solving puzzles";
    newEmployee2.introduction();
};

