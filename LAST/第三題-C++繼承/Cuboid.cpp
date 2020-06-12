#include"Cuboid.h"

Cuboid::Cuboid() {
	length = 1;
	width = 1;
	height = 1;
}
Cuboid::Cuboid(double length, double width, double height, string color) {
	setLenght(length);
	setWidth(width);
	setHeight(height);
	setColor(color);
}

double Cuboid::getLength() {
	return length;
}
double Cuboid::getWidth() {
	return width;
}
double Cuboid::getHeight() {
	return height;
}

void Cuboid::setLenght(double newLength) {
	length = newLength;
}
void Cuboid::setWidth(double newWidth) {
	width = newWidth;
}
void Cuboid::setHeight(double newHeigth) {
	height = newHeigth;
}

void Cuboid::toString() {
	cout  << "Cuboid:(" << int(length) << "," << int(width) << "," << int(height) << "),";
}
double Cuboid::getVolume() {
	return height * width * length;
}