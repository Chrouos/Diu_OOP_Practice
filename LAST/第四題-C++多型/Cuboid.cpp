#include"Cuboid.h"

Cuboid::Cuboid(double length, double width, double height, string color) 
	:length(length), width(width), height(height){
	setColor(color);
}

void Cuboid::toString() {
	cout << "Cuboid:(" << int(length) << "," << int(width) << "," << int(height) << "),";
}
double Cuboid::getVolume() {
	return width * height * length;
}