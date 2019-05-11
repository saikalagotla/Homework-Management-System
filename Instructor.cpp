#include "Instructor.h"

Instructor::Instructor() {
	name = "John Doe";
}

Instructor::Instructor(std::string nam) {
	name = nam;
}

void Instructor::setInstructorName(std::string nam) {
	name = nam;
}

std::string Instructor::getInstructorName() {
	return name;
}