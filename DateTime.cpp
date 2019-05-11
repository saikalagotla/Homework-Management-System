#include "DateTime.h"

DateTime::DateTime(int d, int m, int y, std::string tim) {
	
	day = d;
	month = m;
	year = y;
	time = tim;
}

void DateTime::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

void DateTime::setTime(std::string tim) {
	time = tim;
}

int DateTime::getDay() {
	return day;
}

int DateTime::getMonth() {
	return month;
}

int DateTime::getYear() {
	return year;
}

std::string DateTime::getTime() {
	return time;
}