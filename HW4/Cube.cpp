#include"Cube.h"

Cube::Cube() {
	side = 1;
}
Cube::Cube(const double& side) {
	this->side = side;
}
Cube::Cube(const double& side, const string& color, const bool& filled) {
	setSide(side);
	setColor(color);
	setFilled(filled);
}

void Cube::setSide(double newSide) {
	side = newSide;
}
double Cube::getSide() const {
	return side;
}
double Cube::getVolume()  {
	return pow(side, 3);
}
double Cube::getArea()  {
	return 6 * pow(side, 2);
}

string Cube::toString() {
	stringstream ss;
	ss << "cube, " << side;
	return ss.str();
}
