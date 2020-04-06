#include"Rectangle.h"

Rectangle::Rectangle() {
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double newWidth, double newHeight) {
	setWidth(newWidth);
	setHeight(newHeight);
}

double Rectangle::getWidth() {
	return width;
}
void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}

double Rectangle::getHeight() {
	return height;
}
void Rectangle::setHeight(double newHeight) {
	height = newHeight;
}

double Rectangle::getArea() {
	return height * width;
}