#include"Teacher.h"

int main() {

	ofstream out;
	out.open("Teacher.txt", ios::out | ios::trunc); // ios::app 為 從檔案最後開始寫

	Teacher tArray[4] = {
		Teacher("Jerry", 58, 80.0),
		Teacher("John", 40, 85.0),
		Teacher("Mary", 39, 83.0),
		Teacher("Tom", 37, 73.0)
	};
	
	Teacher temp("A", 30, 5.0);
	for (int i = 0; i < 4; i++) {
		tArray[i].writeToFile(out);
	}
	out.close();

	ifstream in;
	in.open("Teacher.txt", ios::in);

	for (int i = 0; i < 4; i++) {
		tArray[i].readFromFile(in);
	}
	in.close();

	system("pause");
	return 0;

}