#ifndef Shape_H
#define Shape_H

#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;

class Shape
{
public:

	Shape();
	Shape(string color);

	string getColor();
	void setColor(string newColor);

	virtual void toString();
	virtual double getVolume() = 0;


private:

	string color;

};


#endif // !Shape_H
