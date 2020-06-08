#include"Ball.h"

Ball::Ball() {
	radius = 1;
}
Ball::Ball(const double& radius) {
	setRadius(radius);
}
Ball::Ball(double radius, const string& color, const bool& filled) {
	setRadius(radius);
	setColor(color);
	setFilled(filled);
}

void Ball::setRadius(double newRadius) {
	radius = newRadius;
}
double Ball::getRadius() const {
	return radius;
}

double Ball::getVolume()  {
	return 4 * 3.14159 * pow(radius, 3) / 3;
}
double Ball::getArea()  {
	return 4 * 3.14159 * pow(radius, 2);
}

string Ball::toString()  {
	stringstream ss;
	ss << "ball, " << radius;
	return ss.str();
}