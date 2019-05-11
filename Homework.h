#pragma once
#include "DateTime.h"

enum status {
	incomplete = 0,
	inProgress,
	late,
	complete
};

class Homework {
private:
	std::string title;
	std::string description;
	status HWStatus;
	DateTime dueDate;
public:
	Homework();
	Homework(std::string, std::string, status, DateTime);
	void setHWTitle(std::string);
	void setHWDiscription(std::string);
	void setHWStatus(status);
	void setDueDate(DateTime);
	std::string getHWTitle();
	std::string getHWDiscription();
	status getHWStatus();
	DateTime getDueDate();
	int getDueDay();
	int getDueMonth();
	int getDueYear();
	std::string getDueTime();
	~Homework();
};