#include "Course.h"

void Course::setHomeWork(Homework h = Homework()){
    hw = h;
}

Homework Course::getHomeWork(){
    return hw;
}

Course::Course(Homework h){
    
}