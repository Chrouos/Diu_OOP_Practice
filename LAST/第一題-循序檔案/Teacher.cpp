#include"Teacher.h"

Teacher::Teacher() {
	name = "Diu";
	age = 1;
	score = 100;
}
Teacher::Teacher(string name, int age, double score) {
	setName(name);
	setAge(age);
	setScore(score);
}

void Teacher::setName(string newName) {
	name = newName;
}
void Teacher::setAge(int newAge) {
	age = newAge;
}
void Teacher::setScore(double newScore) {
	score = newScore;
}

string	Teacher::getName() {
	return name;
}
int Teacher::getAge() {
	return age;
}
double Teacher::getScore() {
	return score;
}

void Teacher::writeToFile(ofstream& out) {
	out << fixed << setprecision(1) << name << " " << age << " " << score << endl;
}
void Teacher::readFromFile(ifstream& in) {
	string strName, strAge, strScore;
	in >> strName >> strAge >> strScore;
	cout << fixed << setprecision(1) << strName << " " << strAge << " " << strScore << endl;
}