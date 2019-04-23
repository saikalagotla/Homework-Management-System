#pragma once
#include "Instructor.h"
#include <vector>

class Course :public Instructor {
private:
	std::string courseName;
	Instructor instruc;
	std::vector<Homework> hw;
	std::vector<DateTime>  d;

public:
	Course();
	Course(std::string cName, Instructor i, Homework h, DateTime d1);
	void setCourseName(std::string cName);
	std::string getCourseName();
	void addHomeWork(Homework h, DateTime d1);
	void deleteHomeWork(std::string title);
	Homework getHomeWork();
	void display();
};