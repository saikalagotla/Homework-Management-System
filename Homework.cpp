#include "Homework.h"

Homework::Homework(){
    HWStatus = incomplete;
}

Homework::Homework(status HWstat){
    HWStatus = HWstat;
}

void Homework::setHWStatus(status num){
    HWStatus = num;
}

status Homework::getHWStatus(){
    return HWStatus;
}

Homework::~Homework(){

}