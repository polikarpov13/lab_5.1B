#pragma once
#include <iostream>
#include <string>
#include <istream>

using namespace std;

class LongLong
{
	double older;
	double younger;

public:

	LongLong();
	LongLong(double, double);
	LongLong(const LongLong&);

	double getOlder() const { return older; }
	double getYounger() const { return younger; }

	void setOlder(double value) { older = value; }
	void setYounger(double value) { younger = value; }

	void Compare();


	operator string() const;

	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);

	friend ostream& operator <<(ostream&, const LongLong&);
	friend istream& operator >>(istream&, LongLong&);

};

