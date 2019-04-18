#include "Homework.h"

Homework::Homework(){
    HWStatus = incomplete;
}

Homework::Homework(status HWstat, std::string title){
    HWStatus = HWstat;
    this->title = title;
}

void Homework::setHWStatus(status num){
    HWStatus = num;
}

status Homework::getHWStatus(){
    return HWStatus;
}

Homework::~Homework(){

}