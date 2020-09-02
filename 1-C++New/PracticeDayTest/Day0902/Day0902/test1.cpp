#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> v(37, 0);
	v[0] = 1;
	v[1] = 1;
	for (int i = 2; i < 37; ++i)
	{
		v[i] = v[i - 1] + v[i - 2];
	}
	while (cin >> n)
	{
		int ret = 0;
		if (n < 0 || n > 36)
			cout << ret << endl;
		else
		{
			ret = v[n];
			cout << ret << endl;
		}
	}

	return 0;
}