#include "date.h"

int main()
{
	Date d1(2000, 12, 31);
	Date d2(2012, 3, 1);

	cout << d1++ << endl;
	cout << d1-- << endl;
	cout << d1 << endl;

	cout << --d2 << endl;
	cout << ++d2 << endl;
	cout << d2 << endl;
	

	system("pause");
	return 0;
}