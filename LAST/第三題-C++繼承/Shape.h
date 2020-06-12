#ifndef Shape_H
#define Shape_H

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Shape
{
public:

	Shape();
	Shape(string color);

	void setColor(string newColor);
	string getColor();

	void toString();


private:

	string color;

};

#endif // !Shape_H
