#ifndef Teacher_H
#define Teacher_H

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

class Teacher
{
public:

	Teacher();
	Teacher(string name, int age, double score);

	void setName(string newName);
	void setAge(int newAge);
	void setScore(double newScore);

	string	getName();
	int getAge();
	double getScore();

	void writeToFile(ofstream& out);
	void readFromFile(ifstream& in);


private:

	string name;
	int age;
	double score;

};

#endif // !Teacher_H
