#include <iostream>
#include <set>
#include <functional>

#define ARRSIZE(a) (sizeof(a)/sizeof(a[0]))

using namespace std;

// set 和 multiset 的一些区别

int main3()
{
	int a[] = { 1, 3, 5, 7, 9, 4, 2, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };

	multiset<int, less<int>> ms(a, a + ARRSIZE(a));

	set<int, greater<int>> s(a, a + ARRSIZE(a));

	//cout << ms.size() << endl;
	//cout << s.size() << endl;	//set会自动去重

	for (auto & i : ms)
	{
		cout << i << ' ';
	}

	cout << endl;

	for (auto & i : s)
	{
		cout << i << ' ';
	}

	cout << endl;

	cout << ms.count(4) << endl;

	cout << ms.size() << endl;

	cout << s.size() << endl;

	system("pause");
	return 0;
}