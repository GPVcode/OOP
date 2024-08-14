#include <iostream>
#include <vector>
#include <string>

using namespace std;

class AbstractPlayer{
    virtual void AskForNumberChange() = 0;
};

class Attributes:AbstractPlayer{
    private:
        string Name;
        int Number;
        string Height;
        string Position;
        string Role;
        string Specialty;
        string Starters[5];
        int starterCounter = 0;


    public:
    void showcasePlayer(){
        cout << "Name: " << Name << endl;
        cout << "Height: " << Height << endl;
        cout << "Position: " << Position << endl;
        cout << "Number: " << Number << endl;
        cout << "Specialty: " << Specialty << endl << endl;
    }
    void AskForNumberChange(){
        if(Number % 2 == 0){
            cout << Name << " is eligible for a number change." << endl;
        } else{
            cout << Name << " is not elgible for a number change." << endl;
        }
    }

    string getName(){
        return Name;
    }

    string getPosition(){
        return Position;
    }

    void setPosition(string position){
        Position = position;
    }


    Attributes(string name, string height, string position, int number, string role, string specialty){
        Name = name;
        Number = number;
        Height = height;
        Position = position;
        Role = role;
        Specialty = specialty;
    }
};

int main(){

    Attributes Player1 = Attributes("Lebron James", "6'8", "SF", 23, "star", "Superstar");
    Attributes Player2 = Attributes("Austin Reaves", "6'5", "SG", 15, "role player", "Scoring Playmaker");
    Attributes Player3 = Attributes("Anthony Davis", "6'10", "C/PF", 3, "star", "Two-way Star");
    Attributes Player4 = Attributes("D'Angelo Russell", "6'3", "PG", 1, "role player", "Shooter");
    Attributes Player5 = Attributes("Rui Hachimura", "6'8", "SF", 28, "role player", "Mid-Range");
    
    
    cout << "Los Angeles Lakers Starters: " << endl;
    Player1.showcasePlayer();
    Player2.showcasePlayer();
    Player3.showcasePlayer();
    Player4.showcasePlayer();
    Player5.showcasePlayer();

    Player1.setPosition("PG");

    cout << "We have officially announce that " << Player1.getName() << " will now play the " << Player1.getPosition() << " position for matchup purposes." << endl;

    Player1.AskForNumberChange();
    Player2.AskForNumberChange();

};


//encapsulation privacy, and go through methods to access private variables