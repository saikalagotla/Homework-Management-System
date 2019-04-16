#pragma once

enum status{
    incomplete = 0,
    inProgress = 1,
    late = 2,
    complete = 3
};

class Homework{
private:
    status HWStatus;
public:
    Homework();
    status getHWStatus();
    ~Homework();
};