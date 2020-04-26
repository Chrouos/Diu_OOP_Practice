#ifndef StuCard_H
#define StuCard_H

#include"Date.h"

class StuCard
{
public:

	StuCard();
	StuCard(string name, bool sex, double scoreAry[], Date birthDay);
	//也可這麼寫， 不使用陣列，一個一個輸進去
	StuCard(string name, bool sex, double score1, double score2, double score3, Date birthDay);

	void setName(string newName);
	void setSex(bool newSex);
	void setScore(int size, double newScoreAry[]);
	void setDate(Date newDate);

	string getName() const;
	bool getSex() const;
	double getScore(int i) const;
	Date getDate() const;

	//計算三科平均
	double average() const;

	//計算年紀 今年為2020
	int getAge(int thisYear) const;

	void printCard();



private:

	string name;
	bool sex;
	double scoreAry[3];
	Date birthday;

};


#endif // !StuCard_H