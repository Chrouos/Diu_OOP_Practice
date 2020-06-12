#ifndef Cuboid_H
#define Cuboid_H

#include"Shape.h"

class Cuboid : public Shape
{
public:

	Cuboid(double length, double width, double height, string color);

	void toString();
	double getVolume();



private:

	double length, width, height;

};


#endif // !Cuboid_H
