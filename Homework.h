#pragma once
#include <iostream>
#include "DateTime.h"

enum status : unsigned int{
    incomplete = 0,
    inProgress,
    late,
    complete
};

class Homework:public DateTime{
private:
    std::string title;
    status HWStatus;
public:
    Homework();
    Homework(status HWstat, std::string title);
    void setHWStatus(status num);
    status getHWStatus();
    ~Homework();
};