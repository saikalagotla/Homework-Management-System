#pragma once
#include "Homework.h"

class Instructor :public Homework {
private:
	std::string name;
public:
	Instructor(std::string nam = "John Doe");
	void setInstructorName(std::string nam);
	std::string getInstructorName();
};