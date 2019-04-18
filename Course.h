#pragma once
#include <iostream>
#include "Homework.h"
#include "Instructor.h"

class Course:public Homework{
private:
    Instructor in;
    Homework hw;
    
public:
    Course();
    Course(Homework h);
    void setHomeWork(Homework h);
    Homework getHomeWork();
};