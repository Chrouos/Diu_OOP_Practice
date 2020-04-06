#ifndef Rectangle_H
#define Rectangle_H
#include<iostream>
using namespace std;

class Rectangle
{
public:

	Rectangle();
	Rectangle(double newWidth, double newHeight);

	double getWidth();
	void setWidth(double newWidth);

	double getHeight();
	void setHeight(double newHeight);

	double getArea();

private:

	double width;
	double height;

};

#endif // !Rectangle_H
