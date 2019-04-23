#pragma once
#include "DateTime.h"

enum status {
	incomplete = 0,
	inProgress,
	late,
	complete
};

class Homework :public DateTime {
private:
	std::string title;
	std::string discription;
	status HWStatus;
public:
	Homework();
	Homework(std::string title, std::string discrpition, status HWstat);
	void setHWTitle(std::string title);
	void setHWDiscription(std::string discription);
	void setHWStatus(status stat);
	std::string getHWTitle();
	std::string getHWDiscription();
	status getHWStatus();
	~Homework();
};