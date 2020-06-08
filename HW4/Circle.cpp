#include"Circle.h"

CirCle::CirCle() {
	radius = 1;
}
CirCle::CirCle(const double& radius) {
	this->radius = radius;
}
CirCle::CirCle(const double& radius, const string& color, const bool& filled) {
	setRadius(radius);
	setColor(color);
	setFilled(filled);
}

void CirCle::setRadius(double newRadius) {
	radius = newRadius;
}
double CirCle::getRadius() const {
	return radius;
}

double CirCle::getPerimeter()  {
	return radius * 2 * 3.14159;
}
double CirCle::getArea()  {
	return radius * radius * 3.14159;
}

string CirCle::toString() {
	stringstream ss;
	ss << "circle, " << radius;
	return ss.str();
}
