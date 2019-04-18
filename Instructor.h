#pragma once
#include <iostream>

class Instructor:public Homework{
private:
    std::string name;
public:
    Instructor(std::string nam = "John");
    void setName(std::string nam);
    std::string getName();
};