#include"Ball.h"
#include"Circle.h"
#include"Cube.h"
#include"Rectangle.h"
#include"Shape.h"

#include<iomanip>



bool equalArea(Shape& shape1, Shape& shape2) {
	
	return shape1.getArea() == shape2.getArea();
	 
}

bool equalVolume(Shape3D& shape1, Shape3D& shape2) {
	
	return shape1.getVolume() == shape2.getVolume();
}

bool equalPerimeter(Shape2D& shape1, Shape2D& shape2) {

	return shape1.getPerimeter() == shape2.getPerimeter();
}

void display(Shape &shape) {
	cout << fixed << setprecision(2) << shape.toString() << ", " << shape.getColor() << ", " << shape.getArea() << endl;
}

int main() {

	CirCle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);

	display(circle);
	display(rectangle);
	display(ball);
	display(cube);

	if (equalPerimeter(circle, rectangle) == true)
		cout << "circle " << circle.getPerimeter() << " = rectangle " << rectangle.getPerimeter() << endl;
	else
		cout << "circle " << circle.getPerimeter() << " != rectangle " << rectangle.getPerimeter() << endl;

	if (equalVolume(ball, cube) == true)
		cout << "circle " << ball.getVolume() << " = cube " << cube.getVolume() << endl;
	else
		cout << "ball " << ball.getVolume() << " != cube " << cube.getVolume() << endl;


	system("pause");
	return 0;

}