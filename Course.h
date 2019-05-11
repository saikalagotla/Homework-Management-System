#pragma once
#include "Instructor.h"
#include <ctime>
#include <fstream>
#include <vector>

class Course {
private:
	std::string courseName;
	Instructor instruc;
	std::vector<Homework> hw;

public:
	Course();
	Course(std::string, Instructor, Homework);
	Course& setCourseName(std::string);
	std::string getCourseName();
	void addHomeWork(Homework h);
	void deleteHomeWork(std::string);
	void operator-(std::string);
	Homework getHomeWork();
	void completeHomework(Homework, std::string);
	int countLeapYears(DateTime d);
	int getDifferenceBetweenDates(DateTime dt1, DateTime dt2);

	// Homework due in three days from a given time
	void dueInThreeDays(DateTime startDate);

	DateTime getCurrentTime();

	// Homework due in three days from a specific time
	void dueInThreeDays();

	// Displays the course and all homeworks associated with the course
	void display();
};