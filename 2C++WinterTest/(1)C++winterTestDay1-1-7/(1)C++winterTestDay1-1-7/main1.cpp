#include <iostream>

using namespace std;

int main1()
{
	int num;
	int sum;
	num = sum = 7;
	sum = num++, sum++, ++num;

	cout << sum << endl;

	system("pause");
	return 0;
}