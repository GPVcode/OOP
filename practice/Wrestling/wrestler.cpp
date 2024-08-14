#include "wrestler.hpp"
#include <iostream>

Wrestler::Wrestler(std::string set_stage_name, std::string set_finisher, bool set_is_heel){
    stage_name = set_stage_name;
    finisher = set_finisher;
    is_heel = set_is_heel;
}

Wrestler::~Wrestler(){
    std::cout << "[Deleted]" << std::endl;
}

std::string Wrestler::get_stage_name(){
    return stage_name;
}
std::string Wrestler::get_finisher(){
    return finisher;
}

bool Wrestler::get_is_heel(){
    return is_heel;
}
