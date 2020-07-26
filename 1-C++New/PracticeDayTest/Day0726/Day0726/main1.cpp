#include <iostream>
#include <vector>

using namespace std;

//ÇóºÍ
void compose_m(int n, int m, vector<int>& v, int start)
{
	if (m == 0)
	{
		for (size_t i = 0; i < v.size(); ++i)
			cout << v[i] << ' ';
		cout << endl;
	}
	for (int i = start; i <= m && i <= n; ++i)
	{
		v.push_back(i);
		compose_m(n, m - i, v, i + 1);
		v.pop_back();
	}
}

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		vector<int> v;
		compose_m(n, m, v, 1);
	}

	return 0;
}