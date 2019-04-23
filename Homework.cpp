#include "Homework.h"

Homework::Homework() {
	this->title = "title";
	this->discription = "discription";
	HWStatus = incomplete;
}

Homework::Homework(std::string title, std::string discription, status HWstat) {
	this->title = title;
	this->discription = discription;
	HWStatus = HWstat;
}

void Homework::setHWTitle(std::string title) {
	this->title = title;
}

void Homework::setHWDiscription(std::string discription) {
	this->discription = discription;
}

void Homework::setHWStatus(status num) {
	HWStatus = num;
}

std::string Homework::getHWTitle() {
	return title;
}

std::string Homework::getHWDiscription() {
	return discription;
}

status Homework::getHWStatus() {
	return HWStatus;
}

Homework::~Homework() {

}