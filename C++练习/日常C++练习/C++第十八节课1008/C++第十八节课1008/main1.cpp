#include <iostream>
#include <deque>

using namespace std;

int main1()
{
	deque<int> d;

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_front(-1);

	deque<int>::iterator di = d.begin();

	cout << di[2] << endl;


	system("pause");
	return 0;
}