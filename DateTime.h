#pragma once
#include <iostream>

class DateTime{
private:
    std::string date;
    std::string time;
public:
    DateTime(std::string dat = "1/1/1111", std::string tim = "11:59");
    void setDate(std::string dat);
    void setTime(std::string tim);
    std::string getDate();
    std::string getTime();
};