#include"Sphere.h"
#include"Cuboid.h"

int main() {

	double spRadius, cuLenght, cuWidth, cuHeight;
	string spColor, cuColor;

	cin >> spRadius >> spColor;
	cin >> cuLenght >> cuWidth >> cuHeight >> cuColor;

	Sphere sp(spRadius, spColor);
	Cuboid cu(cuLenght, cuWidth, cuHeight, cuColor);

	sp.toString();
	cout << fixed << setprecision(1) << sp.getVolume() << "," << sp.getColor() << endl;
	cu.toString();
	cout << fixed << setprecision(1) << cu.getVolume() << "," << cu.getColor() << endl;

	system("pause");
	return 0;


}

