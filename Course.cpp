#include "Course.h"

Course::Course(std::string cName, Homework h) {
	courseName = cName;
	hw.setHWTitle(h.getHWTitle());
	hw.setHWDiscription(h.getHWDiscription());
}

void Course::setCourseName(std::string cName) {
	courseName = cName;
}

void Course::setHomeWork(Homework h = Homework()) {
	hw = h;
}

std::string Course::getCourseName() {
	return courseName;
}

Homework Course::getHomeWork() {
	return hw;
}

void Course::display() {
	std::cout << "Course name: " << this->getCourseName() << std::endl;
	std::cout << "Instructor: " << this->getInstructorName() << std::endl;
	std::cout << "Homework: " << hw.getHWTitle() << std::endl;
	std::cout << "\tDiscription: " << hw.getHWDiscription() << std::endl;
	std::cout << "\tDUE DATE: " << this->getDate() << " Time: " << this->getTime() << std::endl;
}