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

string Shape::toString() {
	return "Shape";
}