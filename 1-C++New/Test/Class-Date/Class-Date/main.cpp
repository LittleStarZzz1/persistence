#include <iostream>
#include "Date.h"

void testDate()
{
	Date d1(2020, 4, 13);

	//d1 += 10000;
	//d1 -= 1000;

	//Date ret = d1 + 10000;
	Date ret = d1 - 100;

	//d1.Print();
	ret.Print();

}

int main()
{
	testDate();

	
	system("pause");
	return 0;
}