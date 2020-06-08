#ifndef Shape3D_H
#define Shape3D_H

#include"Shape.h"

class Shape3D : public  Shape
{
public:

	Shape3D();

	virtual double getVolume() = 0;

private:

};



#endif // !Shape3D_H
