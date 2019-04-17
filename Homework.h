#pragma once
#include <iostream>

enum status : unsigned int{
    incomplete = 0,
    inProgress,
    late,
    complete
};

class Homework{
private:
    status HWStatus;
public:
    Homework();
    Homework(status HWstat);
    void setHWStatus(status num);
    status getHWStatus();
    ~Homework();
};