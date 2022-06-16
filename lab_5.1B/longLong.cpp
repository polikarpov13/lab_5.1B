#include "LongLong.h"
#include <iostream> 
#include <istream>
#include <string> 
#include <sstream>  
#include <cmath>

LongLong::LongLong() : older(0), younger(0)
{ }

LongLong::LongLong(double o, double y) {
	setOlder(o);
	setYounger(y);
}

LongLong::LongLong(const LongLong& l) {
	*this = l;
}

void LongLong::Compare() {
	if (older + younger == older * younger)
		cout << older + younger << "  is equal  " << older * younger << " \n ";

	if (older + younger != older * younger)
		cout << older + younger << "  is not equal  " << older * younger << " \n ";

	if (older + younger > older * younger)
		cout << older + younger << "  is bigger than " << older * younger << " \n ";

	if (older + younger < older * younger)
		cout << older + younger << "  is less than " << older * younger << " \n ";

	if (older + younger >= older * younger)
		cout << older + younger << "  is bigger/equal than  " << older * younger << " \n ";

	if (older + younger <= older * younger)
		cout << older + younger << "  is less/equal than  " << older * younger << " \n ";
}

LongLong::operator string() const {
	stringstream sout;
	sout << older << "   " << younger;
	return sout.str();
}

LongLong operator + (LongLong& l1, LongLong& l2) {
	LongLong l(0, 0);
	l.older = l1.older + l2.older;
	l.younger = l1.younger + l2.younger;

	return l;
}

LongLong operator * (LongLong& l1, LongLong& l2) {
	LongLong l(0, 0);
	l.older = l1.older * l2.older;
	l.younger = l1.younger * l2.younger;

	return l;
}

ostream& operator << (ostream& out, const LongLong& l) {
	out << l.older << " " << l.younger;
	return out;
}

istream& operator >> (istream& in, LongLong& l) {
	in >> l.older;
	in >> l.younger;

	return in;
}
