#pragma once
#include <iostream>
#include <string>

class DateTime {
private:
	int day;
	int month;
	int year;
	std::string time;
public:
	DateTime(int d = 0, int m = 0, int y = 0, std::string tim = "11:59");
	void setDate(int, int, int);
	void setTime(std::string);
	int getDay();
	int getMonth();
	int getYear();
	std::string getTime();
};