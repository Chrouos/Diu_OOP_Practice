#include<iostream>
#include"StuCard.h"
double* classAver(StuCard[], int);

int main() {

	StuCard stuArray[5];

	//先輸入四個人
	double ScoreArray0[3] = { 80.0, 70.0, 90.0 };
	StuCard temp0("Jerry", 1, ScoreArray0, Date(3, 20, 1997));
	stuArray[0] = temp0;

	double ScoreArray1[3] = { 85.0, 77.0, 95.0 };
	StuCard temp1("John", 1, ScoreArray1, Date(5, 20, 1995));
	stuArray[1] = temp1;

	double ScoreArray2[3] = { 83.0, 75.0, 70.0 };
	StuCard temp2("Mary", 0, ScoreArray2, Date(2, 18, 2007));
	stuArray[2] = temp2;

	double ScoreArray3[3] = { 73.0, 95.0, 67.0 };
	StuCard temp3("Tom", 1, ScoreArray3, Date(11, 8, 2003));
	stuArray[3] = temp3;

	//輸入名字，性別，成績[3]，月日年
	string name;
	int sex, mon, day, year;
	double scoreArray[3];
	cin >> name >> sex >> scoreArray[0] >> scoreArray[1] >> scoreArray[2] >> mon >> day >> year;

	//輸入 方法一
	StuCard temp(name, sex, scoreArray, Date(mon, day, year));
	stuArray[4] = temp;

	/*輸入 方法二

	Date birth(mon, day, year);
	stuArray[4].setName(name);
	stuArray[4].setSex(sex);
	stuArray[4].setScore(3, scoreArray);
	stuArray[4].setDate(birth);

	以上註解為同樣事情
	*/


	//輸出五次
	for (int i = 0; i < 5; i++) {
		stuArray[i].printCard();
	}

	//classAver 方法一
	double* p = classAver(stuArray, 3);
	cout << "Average: " << *(p + 0) << ", " << *(p + 1) << ", " << *(p + 2);

	/*classAver 方法二
	cout << "Average: " << *classAver(stuArray, 0) << ", " << *classAver(stuArray, 1) << ", " << *classAver(stuArray, 2);
	*/

	system("pause");
	return 0;

}

// classAver 方法一
double* classAver(StuCard stuArray[], int n) {
	static double average[3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			average[i] += stuArray[j].getScore(i);
		}
		average[i] /= 5;
	}

	return average;
}

/* classAver 方法二

double* classAver(StuCard stuArray[], int n) {
	double* average = new double();
	double temp = 0;

	for (int i = 0; i < 5; i++) {
		temp += stuArray[i].getScore(n);
	}

	*average = temp / 5;
	return average;
}

*/