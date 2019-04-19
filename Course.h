#pragma once
#include "Instructor.h"

class Course :public Instructor {
private:
	std::string courseName;
	Instructor in;
	Homework hw;

public:
	Course(std::string cName = "course", Homework h = Homework());
	void setCourseName(std::string cName);
	std::string getCourseName();
	void setHomeWork(Homework h);
	Homework getHomeWork();
	void display();
};