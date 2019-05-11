/*
Author: Sai Kalagotla
Professor: Grace Zhao
Date: 5/7/2019
Discription: Homework Management System
*/

#include "Course.h"

int main() {
	
	Instructor inst("Grace Zhao");
	
	DateTime d1(8,5,2019);
	Homework foundationsHW("Final Project", "Homework Tracking Management System", inProgress, d1);

	DateTime d2(21,4,2019);
	Homework foundationsHW2("Assignment 1", "OOP", inProgress, d2);

	DateTime d3(4,5,2019);
	Homework foundationsHW3("Assignment 2", "File Management", inProgress, d3);

	Course foundations("Foundations of Computer Programming II", inst, foundationsHW);

	foundations.addHomeWork(foundationsHW2);
	foundations.addHomeWork(foundationsHW3);

	foundations.completeHomework(foundationsHW2, "completedHomeworks.txt");
	
	//operator overloading
	foundations - "Assignment 2";

	//function chaining
	std::cout << "Function chaining: " << foundations.setCourseName("Foundations II").getCourseName() << std::endl << std::endl;

	foundations.display();
	
	Instructor inst1("Bob Bobby");

	DateTime UD1(7,5,2019);
	Homework UnixHW("HW08", "Textbook homework", inProgress, UD1);

	DateTime UD2(19,4,2019);
	Homework UnixLab("LAB08", "Textbook lab", complete, UD2);

	Course Unix("Unix Operating System", inst1, UnixHW);

	Unix.addHomeWork(UnixLab);
	
	std::cout << std::endl;

	Unix.display();

	DateTime date(5, 5, 2019, "11:59");

	std::cout << std::endl << "DUE IN THREE DAYS: " << std::endl;
	
	// Due in three days from current time
	Unix.dueInThreeDays();

	//function overloading
	// Due in three days from given time
	foundations.dueInThreeDays(date);
	
	std::cin.get();
	return 0;
}
