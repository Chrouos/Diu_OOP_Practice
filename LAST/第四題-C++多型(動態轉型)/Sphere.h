#ifndef Sphere_H
#define Sphere_H

#include"Shape.h"

class Sphere : public Shape
{
public:

	Sphere(double radius, string color);

	void setRadius(double newRadius);
	double getRadius();

	double getVolume();
	string toString();


private:

	double radius;

};


#endif // !Sphere_H
