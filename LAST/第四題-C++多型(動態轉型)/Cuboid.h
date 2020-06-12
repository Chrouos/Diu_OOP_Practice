#ifndef Cuboid_H
#define Cuboid_H

#include"Shape.h"

class Cuboid : public Shape
{
public:

	Cuboid(double length, double width, double height, string color);

	void setLength(double newLength);
	void setWidth(double newWidth);
	void setHeight(double newHeight);

	double getLenght();
	double getWidth();
	double getHeight();

	double getVolume();
	string toString();


private:

	double length, width, height;

};


#endif // !Cuboid_H
