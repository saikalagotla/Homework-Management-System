#include "Course.h"

Course::Course() {
	courseName = "course";
	instruc = Instructor();
	hw.push_back(Homework());
}

Course::Course(std::string cName, Instructor i, Homework h, DateTime d1) {
	courseName = cName;
	instruc = i;
	hw.push_back(h);
	d.push_back(d1);
}

void Course::setCourseName(std::string cName) {
	courseName = cName;
}

void Course::addHomeWork(Homework h, DateTime d1) {
	hw.push_back(h);
	d.push_back(d1);
}


//chechs each index in the vector for the specified title and deletes the homework and due date in that index
void Course::deleteHomeWork(std::string title) {
	for (int i = 0; i < hw.size(); i++) {
		if (hw[i].getHWTitle() == title) {
			hw.erase(hw.begin() + i);
			d.erase(d.begin() + i);
		}
	}
}

std::string Course::getCourseName() {
	return courseName;
}

Homework Course::getHomeWork() {
	for (int i = 0; i < 10; i++) {
		if (hw[i].getHWTitle() != "title" && hw[i].getHWDiscription() != "discription"){
			return hw[i];
		}
	}
}

void Course::display() {
	std::string status[] = { "Incomplete", "Inprogress", "Late", "Complete" };
	std::cout << "COURSE NAME: " << this->getCourseName() << std::endl;
	std::cout << "INSTRUCTOR: " << instruc.getInstructorName() << std::endl;
	for (int i = 0; i < hw.size(); i++) {
		if (hw[i].getHWTitle() != "title" && hw[i].getHWDiscription() != "discription") {
			std::cout << "HOMEWORK: " << hw[i].getHWTitle() << std::endl;
			std::cout << "\tDISCRIPTION: " << hw[i].getHWDiscription() << std::endl;
			std::cout << "\tDUE DATE: " << d[i].getDate() << " TIME: " << d[i].getTime() << std::endl;
			std::cout << "\tSTATUS: " << status[hw[i].getHWStatus()] << std::endl;
		}
	}

}