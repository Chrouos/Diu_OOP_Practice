#include"Sphere.h"
#include"Cuboid.h"

void display(Shape& S) {

	Shape* pS = &S;
	Sphere* pSphere = dynamic_cast<Sphere*>(&S);
	Cuboid* pCuboid = dynamic_cast<Cuboid*>(&S);

	if (pSphere != NULL) {
		cout << fixed << setprecision(1) << "Sphere:(" << int(pSphere->getRadius()) << "),"
			<< S.getVolume() << "," << S.getColor() << endl;
	}
	else if (pCuboid != NULL) {
		cout << "Cuboid:(" << int(pCuboid->getLenght()) << "," << int(pCuboid->getWidth()) << "," << int(pCuboid->getHeight())
			<< ")," << S.getVolume() << "," << S.getColor() << endl;
	}


}

int main() {

	string spColor, cuColor;
	double spRadius, cuLength, cuWidth, cuHeight;

	cin >> spRadius >> spColor >> cuLength >> cuWidth >> cuHeight >> cuColor;

	Sphere sp(spRadius, spColor);
	Cuboid cu(cuLength, cuWidth, cuHeight, cuColor);

//	cout << fixed << setprecision(1) << "Sphere:(" << int(sp.getRadius()) << ")," << sp.getVolume() << "," << sp.getColor() << endl;
//	cout << "Cuboid:(" << int(cu.getLenght()) << "," << int(cu.getWidth()) << "," << int(cu.getHeight()) << "),"
//		<< cu.getVolume() << "," << cu.getColor() << endl;

	display(sp);
	display(cu);

	system("pause");
	return 0;

}