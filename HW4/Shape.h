#ifndef Shape_H
#define Shape_H

#include<string>
#include<iostream>
#include<sstream>
#include<math.h>
using namespace std;

class Shape
{
public:

	Shape();
	Shape(const string&color, const bool& filled);

	void setColor(const string& newColor);
	string getColor()const;

	bool isFilled()const;
	void setFilled(bool newFilled);

	virtual string toString() = 0;

	virtual double getArea() = 0;

private:

	string color;
	bool filled;

};


#endif // !Shape_H
