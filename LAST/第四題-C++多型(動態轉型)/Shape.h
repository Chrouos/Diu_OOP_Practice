#ifndef Shape_H
#define Shape_H

#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

class Shape
{
public:

	Shape();
	Shape(string color);

	void setColor(string newColor);
	string getColor();

	string toString();

	virtual double getVolume() = 0;
	

private:

	string color;

};

#endif // !Shape_H
