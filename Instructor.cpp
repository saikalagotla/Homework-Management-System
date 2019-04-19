#include "Instructor.h"

Instructor::Instructor(std::string nam) {
	name = nam;
}

void Instructor::setInstructorName(std::string nam) {
	name = nam;
}

std::string Instructor::getInstructorName() {
	return name;
}