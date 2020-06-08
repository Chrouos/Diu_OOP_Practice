#include"Ball.h"
#include"Cube.h"
#include<iomanip>

/* 簡單方法
void display(GeometricObject &G) {
	cout << fixed << setprecision(1)
		<< ", area:" << G.getArea() << ", volume:" << G.getVolume() << ", color:" << G.getColor() << endl;
}
*/

void display(GeometricObject& G) {

	GeometricObject* pG = &G;
	
	Ball* pBall = dynamic_cast<Ball*>(&G);
	Cube* pCube = dynamic_cast<Cube*>(&G);

	if (pBall != NULL) {
		cout << "Ball\nradius:" << fixed << setprecision(1) 
			<< pBall->getRadius() << ", area:" << G.getArea()
			<< ", volume:" << G.getVolume() << ", color:" << G.getColor() << endl;
	}
	if (pCube != NULL) {
		cout << "Cube\nlength:" << fixed << setprecision(1)
			<< pCube->getLength() << ", area:" << G.getArea()
			<< ", volume:" << G.getVolume() << ", color:" << G.getColor() << endl;
	}


}

int main() {

	double ballRadius, cubeLength;
	string ballColor, cubeColor;

	cin >> ballRadius >> ballColor >> cubeLength >> cubeColor;

	Ball ball(ballRadius, ballColor);
	Cube cube(cubeLength, cubeColor);

	/* 簡單方法
	cout << "Ball\nradius:" << fixed << setprecision(1) << ball.getRadius();
	display(ball);

	cout << "Cube\nlength:" << fixed << setprecision(1) << cube.getLength();
	display(cube);
	*/
	display(ball);
	display(cube);


}
