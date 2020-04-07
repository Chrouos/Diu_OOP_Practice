#ifndef Student_H
#define Student_H

#include"Date.h"
#include<string>
#include<iostream>
using namespace std;

class Student
{
public:
	Student(string newName, Date newDate, int newScore);

	void setName(string newName);
	string getName() const;

	void setDate(int newMonth, int newDay, int newYear);
	Date getDate() ;

	void setScore(int newScore);
	int getScore() const;

	void print();


private:
	
	string name;
	Date birthDay;
	int score;

};

#endif // !Student_H
