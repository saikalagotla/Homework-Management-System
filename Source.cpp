#include "Course.h"

int main() {
	Homework foundationsHW("Final Project", "The final project for Foundations", inProgress);
	Course foundations("Foundations of Computer Programming II", foundationsHW);
	foundations.setInstructorName("Grace Zhou");
	foundations.setDate("5/8/2019");

	foundations.display();

	std::cin.get();
	return 0;
}
