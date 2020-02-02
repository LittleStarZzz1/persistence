#include <iostream>

using namespace std;

int main1()
{
	char * p = "abcdefgh", *r;
	long * q;
	q = (long*)p;
	q++;
	r = (char*)q;
	cout << r << endl;

	system("pause");
	return 0;
}