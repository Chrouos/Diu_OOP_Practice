#include"StuCard.h"

StuCard::StuCard() {
	name = "DiuDiu";
	sex = 0;
	scoreAry[0] = 100;
	scoreAry[1] = 100;
	scoreAry[2] = 100;
}
StuCard::StuCard(string name, bool sex, double scoreAry[3]) {
	setName(name);
	setSex(sex);
	for (int i = 0; i < 3; i++) {
		this->scoreAry[i] = scoreAry[i];
	}
}
StuCard::StuCard(string name, bool sex, double score0, double score1, double score2) {
	setName(name);
	setSex(sex);
	setScore(0, score0);
	setScore(1, score1);
	setScore(2, score2);
}

void StuCard::setName(string newName) {
	name = newName;
}
void StuCard::setSex(bool newSex) {
	sex = newSex;
}
void StuCard::setScore(int index, double newScore) {
	scoreAry[index] = newScore;
}
void StuCard::setScore(double newScoreAry[3]) {
	for (int i = 0; i < 3; i++) {
		scoreAry[i] = newScoreAry[i];
	}
}

string StuCard::getName() {
	return name;
}
bool StuCard::getSex() {
	return sex;
}
double StuCard::getScore(int index) {
	return scoreAry[index];
}

void StuCard::writeToFile(StuCard StuArray[5]) {

	//用於將資料寫入檔案，或讀取檔案資料。
	ofstream out;

	//打開檔案"ScoreAry.txt"
	//ios::out 為寫入（內到外，輸出）  ios::in 為讀取（外到內，輸入）
	out.open("ScoreAry.txt", ios::out);

	//存入五筆資料
	for (int i = 0; i < 5; i++) {
		out << fixed<<setprecision(1)<< StuArray[i].getName() << " " << StuArray[i].getSex() << " "
			<< StuArray[i].getScore(0) << " " << StuArray[i].getScore(1) << " "
			<< StuArray[i].getScore(2) << endl;
	}
	out.close();

}
void StuCard::readFromFile(StuCard StuArray[5]) {

	/*
	fstream inout;
	
	string strStu;
	inout.open("ScoreAry.txt", ios::in);
	for (int i = 0; i < 25; i++) {
		inout >> strStu;

		//char判斷是否為換行
		char ch = inout.get();
		cout << strStu << " ";

		//碰到換行就endl
		if (ch == '\n') cout << endl;
	}

	inout.close();
	*/

	ifstream in;
	in.open("ScoreAry.txt", ios::in);

	for (int i = 0; i < 5; i++) {
		string name, sex, s1, s2, s3;
		in >> name >> sex >> s1 >> s2 >> s3;
		cout << fixed << setprecision(1)
			<< name << " " << sex << " " << s1 << " " << s2 << " " << s3 << endl;
	}
	in.close();
}