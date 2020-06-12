#include"Sphere.h"
#include<math.h>

Sphere::Sphere() {
	radius = 1;
}
Sphere::Sphere(double radius, string color) {
	setRadius(radius);
	setColor(color);
}

void Sphere::setRadius(double newRadius) {
	radius = newRadius;
}
double Sphere::getRadius() {
	return radius;
}

void Sphere::toString() {
	cout << "Sphere:(" << radius << "),";
}
double Sphere::getVolume() {
	return 4 * 3.14159 * pow(radius, 3) / 3;
}