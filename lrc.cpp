#include "lrc.h"

LittleRedCounter::LittleRedCounter(int v) {

	if (v < 0 || v > 9999) v = 0;
	value = v;
	overflow = false;

}

void LittleRedCounter::reset() {

	value = 0;
	overflow = false;

}

void LittleRedCounter::penny(int clicks) {
	
	value += clicks;

	if (value > 9999) {
		overflow = true;
		value %= 10000;
	}

}

void LittleRedCounter::dime(int clicks) {

	value += (clicks * 10);

}

void LittleRedCounter::dollar(int clicks) {

	value += (clicks * 100);

}

void LittleRedCounter::ten(int clicks) {

	value += (clicks * 1000);

}

int LittleRedCounter::getValue()
{
	return value;
}

bool LittleRedCounter::isOverFlow()
{
	return overflow;
}

void LittleRedCounter::display(){

	using namespace std;		// uses <iostream> & <iomanip>

	cout << "$" << setw(5) << fixed
		 << setprecision(2) 
		 << static_cast<double>(value) / 100.0;
	
	if (overflow) {
		cout << "(*)";
	}

}
