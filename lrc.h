#pragma once
#include <iostream>
#include <iomanip>

class LittleRedCounter {


	public:
		
		//constructor
		//LittleRedCounter();
		LittleRedCounter(int v = 0);

		// mutatros
		void reset();
		void penny(int clicks = 1);
		void dime(int clicks = 1);
		void dollar(int clicks = 1);
		void ten(int clicks = 1);
		

		//accessors

		int getValue();
		bool isOverFlow();


		//other
		void display(); // uses <iostream>

	private:

		int value;
		bool overflow; 
};


