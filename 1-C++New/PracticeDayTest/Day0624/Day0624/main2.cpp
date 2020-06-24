#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Ï´ÅÆ
void PokerSort(vector<int>& v, int& n)
{
	vector<int> tmp(v);
	for (int i = 0; i < n; ++i)
	{
		v[2 * i] = tmp[i];
		v[2 * i + 1] = tmp[i + n];
	}
	return;
}

int main()
{
	int n, k, T;
	cin >> T;
	while (T--)
	{
		while (cin >> n >> k)
		{
			vector<int> v;
			v.resize(n * 2);
			for (int i = 0; i < n * 2; ++i)
				cin >> v[i];
			while (k)
			{
				PokerSort(v, n);
				k--;
			}
			for (auto& e : v)
				cout << e << " ";
			cout << endl;
		}
	}

	return 0;
}