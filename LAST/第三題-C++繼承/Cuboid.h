#ifndef Cuboid_H
#define Cuboid_H

#include"Shape.h"

class Cuboid : public Shape
{
public:

	Cuboid();
	Cuboid(double length, double width, double height, string color);

	double getLength();
	double getWidth();
	double getHeight();

	void setLenght(double newLength);
	void setWidth(double newWidth);
	void setHeight(double newHeigth);

	void toString();
	double getVolume();


private:

	double length, width, height;

};

#endif // !Cuboid_H
