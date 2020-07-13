#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//mkdir
int main()
{
	int n;
	while (cin >> n)
	{
		vector<string> v(n);
		vector<bool> flag(n, true);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < n - 1; ++i)
		{
			//两串相等,flag置为false,表示不要需要打印前串
			if (v[i] == v[i + 1])
				flag[i] = false;
			//前串是后串子串, 并且前串后串用'/'间隔,flag置为false,表示不需要打印前串
			else if (v[i].size() < v[i + 1].size() &&
				v[i] == v[i + 1].substr(0, v[i].size()) &&
				v[i + 1][v[i].size()] == '/')
				flag[i] = false;
		}

		for (int i = 0; i < n; ++i)
		{
			if (flag[i])
				cout << "mkdir -p " << v[i] << endl;
		}
		cout << endl;
	}


	return 0;
}