#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//输出完全数个数
bool getPerfectNum(const int n)
{
	int ret = 1;
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			ret += i;
			if (i != (n / i))
				ret += (n / i);
		}
	}
	if (ret == n)
		return true;
	return false;
}

int main()
{
	int n;
	while (cin >> n)
	{
		if (n <= 1)
			return -1;
		int count = 0;
		for (int i = 2; i <= n; ++i)//1不是完全数,直接从2开始
		{
			if (getPerfectNum(i))
				++count;
		}

		cout << count << endl;
	}

	return 0;
}