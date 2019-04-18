#include "Instructor.h"

Instructor::Instructor(std::string nam = "John"){
    name = nam;
}

void Instructor::setName(std::string nam){
    name = nam;
}

std::string Instructor::getName(){
    return name;
}