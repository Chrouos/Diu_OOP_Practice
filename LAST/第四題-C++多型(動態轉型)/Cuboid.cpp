#include"Cuboid.h"

Cuboid::Cuboid(double length, double width, double height, string color) {
	setLength(length);
	setWidth(width);
	setHeight(height);
	setColor(color);
}

void Cuboid::setLength(double newLength) {
	length = newLength;
}
void Cuboid::setWidth(double newWidth) {
	width = newWidth;
}
void Cuboid::setHeight(double newHeight) {
	height = newHeight;
}

double Cuboid::getLenght() {
	return length;
}
double Cuboid::getWidth() {
	return width;
}
double Cuboid::getHeight() {
	return height;
}

double Cuboid::getVolume() {
	return width * height * length;
}
string Cuboid::toString() {
	return "Cuboid";
}