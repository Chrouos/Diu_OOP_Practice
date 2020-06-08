#ifndef Cube_H
#define Cube_H

#include"Shape3D.h"

class Cube : public  Shape3D
{
public:

	Cube();
	Cube(const double& side);
	Cube(const double& side, const string& color, const bool& filled);

	void setSide(double newSide);
	double getSide()const;
	double getVolume();
	double getArea();

	string toString();

private:

	double side;

};



#endif // !Cube_H
