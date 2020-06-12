#include"Cuboid.h"
#include"Sphere.h"

void display(Shape& S) {
	S.toString();
	cout << fixed << setprecision(1) << S.getVolume() << "," << S.getColor() << endl;
}

int main() {

	double spRadius, cuLen, cuWid, cuHei;
	string spColor, cuColor;

	cin >> spRadius >> spColor;
	cin >> cuLen >> cuWid >> cuHei >> cuColor;

	Sphere sp(spRadius, spColor);
	Cuboid cu(cuLen, cuWid, cuHei, cuColor);

	

	display(sp);
	display(cu);

	system("pause");
	return 0;


}