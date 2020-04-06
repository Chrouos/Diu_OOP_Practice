#include"Rectangle.h"
#include<iomanip>

//計算長方形陣列的總面積
double sum(Rectangle rectArray[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += rectArray[i].getArea();
	}
	return sum;
}

//輸出長方形的『寬(width)』、『長(height)』、『面積』、『總面積』
void printRectangleArray(Rectangle rectArray[], int size) {

	for (int i = 0; i < size; i++) {
		cout << rectArray[i].getHeight() << " " << rectArray[i].getWidth() << " " << rectArray[i].getArea() << endl;
	}
	cout << "Total:" << sum(rectArray, size);
}

int main() {

	const int SIZE = 4;
	double height, width;
	Rectangle rectangleArray[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cin >> height >> width;
		rectangleArray[i].setHeight(height);
		rectangleArray[i].setWidth(width);
	}
	
	printRectangleArray(rectangleArray, SIZE);

}