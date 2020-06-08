#ifndef Shape2D_H
#define Shape2D_H

#include"Shape.h"

class Shape2D : public  Shape
{
public:

	Shape2D();

	virtual double getPerimeter() = 0;

private:

};


#endif // !Shape2D_H
