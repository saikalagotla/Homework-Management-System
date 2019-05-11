#pragma once
#include "Homework.h"

class Instructor {
private:
	std::string name;
public:
	Instructor();
	Instructor(std::string);
	void setInstructorName(std::string);
	std::string getInstructorName();
};