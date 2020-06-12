#include"Shape.h"

Shape::Shape() {
	color = "RED";
}
Shape::Shape(string color) {
	setColor(color);
}

string Shape::getColor() {
	return color;
}
void Shape::setColor(string newColor) {
	color = newColor;
}

void Shape::toString() {
	cout << "Shape";
}