#ifndef Rational_H
#define Rational_H

#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;

class Rational
{
public:

	Rational(int numerator, int denominator);

	//取得分子、分母
	int getNumerator() const;
	int getDenominator() const;

	//計算 最大公因數 GCD
	int gcd(int n, int d);

	// 運算子 + - * /
	Rational operator+(const Rational& r2) const;
	Rational operator-(const Rational& r2) const;
	Rational operator*(const Rational& r2) const;
	Rational operator/(const Rational& r2) const;

	//比對大小
	int compareTo(const Rational& r2) const;

	// <, <=, >=, ==, !=
	bool operator<(const Rational& r2) const;
	bool operator<=(const Rational& r2) const;
	bool operator>=(const Rational& r2) const;
	bool operator==(const Rational& r2)const;
	bool operator!=(const Rational& r2) const;

	// <<, >>
	bool operator<<(const Rational& r2);
	bool operator>>(const Rational& r2);

	//[]
	int operator[](int num);

	// +=, -=, *=, /=
	Rational operator+=(const Rational& r2);
	Rational operator-=(const Rational& r2);
	Rational operator*=(const Rational& r2);
	Rational operator/=(const Rational& r2);

	// ++ -- 
	Rational operator++(int num);
	Rational operator--(int num);

	Rational& operator++();
	Rational& operator--();

	void compareToVoid(const Rational& r2);
	string toString() const;

private:

	int numerator;
	int denominator;

};


#endif // Rational_H
