#include <iostream>
#include <vector>

using namespace std;

//斐波那契问题，养兔子
int main()
{
	int n;
	long long FibTable[91] = { 0, 1, 2 };
	for (int i = 3; i < 91; ++i)
		FibTable[i] = FibTable[i - 2] + FibTable[i - 1];
	while (cin >> n)
	{
		cout << FibTable[n] << endl;
	}

	return 0;
}