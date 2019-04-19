#pragma once
#include "DateTime.h"

enum status : unsigned int {
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
	Homework(std::string title = "title", std::string discrpition = "discription", status HWstat = incomplete);
	void setHWTitle(std::string title);
	void setHWDiscription(std::string discription);
	void setHWStatus(status stat);
	std::string getHWTitle();
	std::string getHWDiscription();
	status getHWStatus();
	~Homework();
};