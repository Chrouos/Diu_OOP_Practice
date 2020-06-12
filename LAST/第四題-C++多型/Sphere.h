#ifndef Sphere_H
#define Sphere_H

#include"Shape.h"

class Sphere : public Shape
{
public:

	Sphere(double radius, string color);

	void toString();
	double getVolume();


private:

	double radius;

};


#endif // !Sphere_H
