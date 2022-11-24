/*
*
*/


#include <iostream>
#include "lrc.h"


int main() {

	LittleRedCounter lrc;

	lrc.penny();
	lrc.dime();
	lrc.dollar(4);
	lrc.ten(1);
	std::cout << lrc.getValue() << std::endl;
	lrc.display();
	std::cout << std::endl;

	lrc.ten(10);
	lrc.display();
	std::cout << std::endl;

	lrc.reset();

	return 0;
}