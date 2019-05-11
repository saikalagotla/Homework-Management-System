#include "Homework.h"

Homework::Homework() {
	this->title = "title";
	this->description = "discription";
	HWStatus = incomplete;
	dueDate = DateTime();
}

Homework::Homework(std::string title, std::string discription, status HWstat, DateTime d) {
	this->title = title;
	this->description = discription;
	HWStatus = HWstat;
	dueDate = d;
}

void Homework::setHWTitle(std::string title) {
	this->title = title;
}

void Homework::setHWDiscription(std::string discription) {
	this->description = discription;
}

void Homework::setHWStatus(status num) {
	HWStatus = num;
}

void Homework::setDueDate(DateTime d) {
	dueDate.setDate(d.getDay(), d.getMonth(), d.getYear());
}

std::string Homework::getHWTitle() {
	return title;
}

std::string Homework::getHWDiscription() {
	return description;
}

status Homework::getHWStatus() {
	return HWStatus;
}

DateTime Homework::getDueDate() {
	return dueDate;
}

int Homework::getDueDay() {
	return dueDate.getDay();
}

int Homework::getDueMonth() {
	return dueDate.getMonth();
}

int Homework::getDueYear() {
	return dueDate.getYear();
}

std::string Homework::getDueTime() {
	return dueDate.getTime();
}

Homework::~Homework() {

}