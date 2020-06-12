#include"Shape.h"

Shape::Shape() {
	color = "RED";
}
Shape::Shape(string color) {
	setColor(color);
}

void Shape::setColor(string newColor) {
	color = newColor;
}
string Shape::getColor() {
	return color;
}

void Shape::toString() {
	cout << "Shape";
}