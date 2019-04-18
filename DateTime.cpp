 #include "DateTime.h"

DateTime::DateTime(std::string dat = "1/1/1111", std::string tim = "11:59"){
    date = dat;
    time = tim;
}
    
void DateTime::setDate(std::string dat){
   date = dat;
}

void DateTime::setTime(std::string tim){
    time = tim;
}

std::string DateTime::getDate(){
    return date;
}

std::string DateTime::getTime(){
    return time;
}