#ifndef Sphere_H
#define Sphere_H

#include"Shape.h"

class Sphere : public Shape
{
public:

	Sphere();	
	Sphere(double radius, string color);

	void setRadius(double newRadius);
	double getRadius();

	void toString();
	double getVolume();


private:

	double radius;

};


#endif // !Sphere_H
