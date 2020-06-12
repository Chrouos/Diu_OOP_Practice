#include"Sphere.h"

Sphere::Sphere(double radius, string color) {
	this->radius = radius;
	setColor(color);
}

void Sphere::toString() {
	cout << "Sphere:(" << radius << "),";
}
double Sphere::getVolume() {
	return 4 * 3.14159 * pow(radius, 3) / 3;
}