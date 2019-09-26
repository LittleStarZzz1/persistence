#include <iostream>


using namespace std;

int add(short a, short b)
{
	cout << "1\n";
	return a + b;
}

//short add(short a, short b)
//{
//	cout << "2\n";
//	return a + b;
//}



int main1()
{
	cout << add(1, 3) << endl;

	system("pause");
	return 0;
}
