#include"Student.h"

Student::Student(string newName, Date newDate, int newScore) {
	setName(newName);
	setScore(newScore);
	birthDay = newDate;
}


void Student::setName(string newName) {
	name = newName;
}
string Student::getName() const {
	return name;
}

void Student::setDate(int newMonth, int newDay, int newYear) {
	birthDay.setMonth(newMonth);
	birthDay.setDay(newDay);
	birthDay.setYear(newYear);
}
Date Student::getDate() const {
	return birthDay;
}

void Student::setScore(int newScore) {
	score = newScore;
}
int Student::getScore() const {
	return score;
}

void Student::print() {
	cout << name << " " << score;
}