#include "Course.h"

int main() {
	Instructor inst("Grace Zhao");
	
	Homework foundationsHW("Final Project", "Homework Tracking Management System", inProgress);
	DateTime d1("5/8/2019");

	//makes a course named Foundations... with 1 homework
	Course foundations("Foundations of Computer Programming II", inst, foundationsHW, d1);

	Homework foundationsHW2("Final Projec", "Homework Tracking Management System", inProgress);
	DateTime d2("5/21/2019");

	Homework foundationsHW3("Assignment 6", "OOP", complete);
	DateTime d3("4/21/2019");

	//adds a homework to the foundations class
	foundations.addHomeWork(foundationsHW2, d2);
	foundations.addHomeWork(foundationsHW3, d3);

	foundations.deleteHomeWork("Final Projec");

	foundations.display();
	
	//--------------------------------------------------------------------------------------
	//--------------------------------------------------------------------------------------

	//new course
	std::cout << std::endl << std::endl;

	Instructor inst1("Harry Espilat");

	Homework UnixHW("HW08", "Textbook homework", inProgress);
	DateTime UD1("5/8/2019");

	Course Unix("Unix Operating System", inst1, UnixHW, UD1);

	Homework UnixLab("LAB08", "Textbook lab", complete);
	DateTime UD2("4/19/2019");

	Unix.addHomeWork(UnixLab, UD2);

	Unix.display();
	
	std::cin.get();
	return 0;
}
