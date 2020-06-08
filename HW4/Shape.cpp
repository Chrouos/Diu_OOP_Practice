#include"Shape.h"

Shape::Shape() {
	color = "Red";
	filled = 0;
}
Shape::Shape(const string& color, const bool& filled) {
	setColor(color);
	setFilled(filled);
}

void Shape::setColor(const string& newColor) {
	color = newColor;
}
string Shape::getColor() const {
	return color;
}

bool Shape::isFilled() const {
	return filled;
}
void Shape::setFilled(bool newFilled) {
	filled = newFilled;
}

