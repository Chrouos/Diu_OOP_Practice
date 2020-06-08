#ifndef Rectangle_H
#define Rectangle_H

#include"Shape2D.h"

class Rectangle : public  Shape2D
{
public:

	Rectangle();
	Rectangle(const double& width, const  double& height);
	Rectangle(const double& width, const double& height, const string& color, const bool& filled);

	void setWidth(double width);
	double getWidth()const;

	void setHeight(double newHeight);
	double getHeight()const;

	double getPerimeter();
	double 	getArea();

	string toString();

private:

	double width, height;

};


#endif // !Rectangle_H
