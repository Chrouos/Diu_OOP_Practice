#include"Rectangle.h"

Rectangle::Rectangle() {
	width = 1;
	height = 1;
}
Rectangle::Rectangle(const double& width, const  double& height) {
	setWidth(width);
	setHeight(height);
}
Rectangle::Rectangle(const double& width, const double& height, const string& color, const bool& filled) {
	setWidth(width);
	setHeight(height);
	setColor(color);
	setFilled(filled);
}

void Rectangle::setWidth(double width) {
	this->width = width;
}
double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}
double Rectangle::getHeight() const {
	return height;
}

double Rectangle::getPerimeter()  {
	return 2 * (height + width);
}
double 	Rectangle::getArea()  {
	return height * width;
}

string Rectangle::toString() {
	stringstream ss;
	ss << "rectangle, " << width << ", " << height;
	return ss.str();
}