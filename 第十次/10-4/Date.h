#ifndef Data_H
#define Data_H
#include"Student.h"

class Date
{
public:

	Date();
	Date(int newMonth, int newDay, int newYear);

	void setMonth(int newMonth);
	void setDay(int newDay);
	void setYear(int newYear);

	int getMonth() const;
	int getDay() const;
	int getYear() const;
	void print();

private:
	
	int month;
	int day;
	int year;


};



#endif // !Data_H
