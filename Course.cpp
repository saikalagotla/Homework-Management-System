#include "Course.h"

Course::Course() {
	courseName = "course";
	instruc = Instructor();
	hw.push_back(Homework());
}

Course::Course(std::string cName, Instructor i, Homework h) {
	courseName = cName;
	instruc = i;
	hw.push_back(h);
}

Course& Course::setCourseName(std::string cName) {
	courseName = cName;
	return *this;
}

std::string Course::getCourseName() {
	return courseName;
}

void Course::addHomeWork(Homework h) {
	hw.push_back(h);
}

//checks each index in the vector for the specified title and deletes the homework and due date in that index
void Course::deleteHomeWork(std::string title) {
	for (unsigned int i = 0; i < hw.size(); i++) {
		if (hw[i].getHWTitle() == title) {
			hw.erase(hw.begin() + i);
		}
	}
}

void Course::operator-(std::string title) {
	for (unsigned int i = 0; i < hw.size(); i++) {
		if (hw[i].getHWTitle() == title) {
			hw.erase(hw.begin() + i);
		}
	}
}

Homework Course::getHomeWork() {
	for (unsigned int i = 0; i < 10; i++) {
		if (hw[i].getHWTitle() != "title" && hw[i].getHWDiscription() != "discription"){
			return hw[i];
		}
	}
}

void Course::completeHomework(Homework h, std::string fileName) {
	std::string HWStatus[] = { "Incomplete", "Inprogress", "Late", "Complete" };
	h.setHWStatus(complete);
	std::ofstream myFile;
	myFile.open(fileName);
	myFile << "COURSE NAME: " << courseName << std::endl;
	myFile << "INSTRUCTOR: " << instruc.getInstructorName() << std::endl;
	myFile << "HOMEWORK: " << h.getHWTitle() << std::endl;
	myFile << "\tDISCRIPTION: " << h.getHWDiscription() << std::endl;
	myFile << "\tDUE DATE: " << h.getDueMonth() << "/" << h.getDueDay() << "/" << h.getDueYear() << " TIME: " << h.getDueTime() << std::endl;
	myFile << "\tSTATUS: " << HWStatus[h.getHWStatus()] << std::endl;
	this->deleteHomeWork(h.getHWTitle());
}

int Course::countLeapYears(DateTime d)
{
	int year = d.getYear();

	// Check if the current year needs to be considered 
	// for the count of leap years or not 
	if (d.getMonth() <= 2)
		year--;

	// year is a leap year if it is a multiple of 4, 
	// multiple of 400 and not a multiple of 100. 
	return year / 4 - year / 100 + year / 400;
}

int Course::getDifferenceBetweenDates(DateTime dt1, DateTime dt2)
{
	const int monthDays[12] = { 31, 28, 31, 30, 31, 30,
						   31, 31, 30, 31, 30, 31 };

	// initialize count using years and day 
	long int n1 = dt1.getYear() * 365 + dt1.getDay();

	// Add days for months in given date 
	for (int i = 0; i < dt1.getMonth() - 1; i++)
		n1 += monthDays[i];

	// Since every leap year is of 366 days, 
	// Add a day for every leap year 
	n1 += countLeapYears(dt1);

	// SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2' 

	long int n2 = dt2.getYear() * 365 + dt2.getDay();
	for (int i = 0; i < dt2.getMonth() - 1; i++)
		n2 += monthDays[i];
	n2 += countLeapYears(dt2);

	// return difference between two counts 
	return (n2 - n1);
}


void Course::dueInThreeDays(DateTime startDate) {
	std::vector<Homework> DueThreeDays;
	
	for (unsigned int x = 0; x < hw.size(); x++) {
		int y = getDifferenceBetweenDates(startDate, hw[x].getDueDate());
		if (y >= 0 && y <= 3) {
			DueThreeDays.push_back(hw[x]);
		}
	}

	std::string HWStatus[] = { "Incomplete", "Inprogress", "Late", "Complete" };
	std::cout << "COURSE NAME: " << courseName << std::endl;
	std::cout << "INSTRUCTOR: " << instruc.getInstructorName() << std::endl;
	for (unsigned int y = 0; y < DueThreeDays.size(); y++) {
		std::cout << "HOMEWORK: " << DueThreeDays[y].getHWTitle() << std::endl;
		std::cout << "\tDISCRIPTION: " << DueThreeDays[y].getHWDiscription() << std::endl;
		std::cout << "\tDUE DATE: " << DueThreeDays[y].getDueMonth() << "/" << hw[y].getDueDay() << "/" << hw[y].getDueYear() << " TIME: " << hw[y].getDueTime() << std::endl;
		std::cout << "\tSTATUS: " << HWStatus[DueThreeDays[y].getHWStatus()] << std::endl;
	}
}

DateTime Course::getCurrentTime() {
	// current date/time based on current system
	time_t now = time(0);
	tm *ltm = localtime(&now);

	// set todays date
	int year = 1900 + ltm->tm_year;
	int month = 1 + ltm->tm_mon;
	int day = ltm->tm_mday;

	DateTime d(day, month, year);

	return d;
}

void Course::dueInThreeDays() {
	std::vector<Homework> DueThreeDays;

	for (unsigned int x = 0; x < hw.size(); x++) {
		int y = getDifferenceBetweenDates(getCurrentTime(), hw[x].getDueDate());
		if (y >= 0 && y <= 3) {
			DueThreeDays.push_back(hw[x]);
		}
	}

	std::string HWStatus[] = { "Incomplete", "Inprogress", "Late", "Complete" };
	std::cout << "COURSE NAME: " << courseName << std::endl;
	std::cout << "INSTRUCTOR: " << instruc.getInstructorName() << std::endl;
	for (unsigned int y = 0; y < DueThreeDays.size(); y++) {
		std::cout << "HOMEWORK: " << DueThreeDays[y].getHWTitle() << std::endl;
		std::cout << "\tDISCRIPTION: " << DueThreeDays[y].getHWDiscription() << std::endl;
		std::cout << "\tDUE DATE: " << DueThreeDays[y].getDueMonth() << "/" << hw[y].getDueDay() << "/" << hw[y].getDueYear() << " TIME: " << hw[y].getDueTime() << std::endl;
		std::cout << "\tSTATUS: " << HWStatus[DueThreeDays[y].getHWStatus()] << std::endl;
	}
}

void Course::display() {
	std::string HWStatus[] = { "Incomplete", "Inprogress", "Late", "Complete" };
	std::cout << "COURSE NAME: " << courseName << std::endl;
	std::cout << "INSTRUCTOR: " << instruc.getInstructorName() << std::endl;
	for (unsigned int i = 0; i < hw.size(); i++) {
		if (hw[i].getHWTitle() != "title" && hw[i].getHWDiscription() != "discription") {
			std::cout << "HOMEWORK: " << hw[i].getHWTitle() << std::endl;
			std::cout << "\tDISCRIPTION: " << hw[i].getHWDiscription() << std::endl;
			std::cout << "\tDUE DATE: " << hw[i].getDueMonth() << "/" << hw[i].getDueDay() << "/" << hw[i].getDueYear() << " TIME: " << hw[i].getDueTime() << std::endl;
			std::cout << "\tSTATUS: " << HWStatus[hw[i].getHWStatus()] << std::endl;
		}
	}

}