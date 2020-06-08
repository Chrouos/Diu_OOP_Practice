#ifndef Circle_H
#define Circle_H

#include"Shape2D.h"

class CirCle : public  Shape2D
{
public:

	CirCle();
	CirCle(const double& radius);
	CirCle(const double &radius, const string &color, const bool &filled);

	void setRadius(double newRadius);
	double getRadius()const;

	double getPerimeter();
	double getArea();

	string toString();

private:

	double radius;

};


#endif // !Circle_H
