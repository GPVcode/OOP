#include <iostream>
#include "wrestler.hpp"


int main(){

    Wrestler Cody_Rhodes = Wrestler("Cody Rhodes", "The Cross Rhodes", false);

    std::cout << Cody_Rhodes.get_stage_name() << " is the current Champ of the WWE. " << "He finishes his matches using his devastating maneuver, " << Cody_Rhodes.get_finisher() << "." << std::endl;
    std::cout << "Is " << Cody_Rhodes.get_stage_name() << " a heel? " << (Cody_Rhodes.get_is_heel() ? "Yes." : "No.") << std::endl;
    return 0;
};
