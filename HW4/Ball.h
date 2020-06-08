#ifndef Ball_H
#define Ball_H

#include"Shape3D.h"

class Ball : public  Shape3D
{
public:

	Ball();
	Ball(const double& radius);
	Ball(double radius, const string &color, const bool &filled);
	
	void setRadius(double newRadius);
	double getRadius()const;
	double getVolume();
	double getArea();

	string toString();

private:

	double radius;

};

#endif // !Ball_H

