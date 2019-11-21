#include <iostream>
#include <set>

using namespace std;

//有n堆石子，每次取出两堆合成一堆，每堆石子的个数即为合并石子所需要耗费的体力，求出合并所有石子堆所需要耗费的最小体力
//典型的贪心题，即每次取出数量最少的两堆石子合并.

int main2()
{
	int n;
	cin >> n; //石子的堆数

	multiset<int> data; //合并石子后石子个数可能会和原有的某堆石子个数相同，所有选择 multiset(set会自动去重)
	multiset<int>::iterator is;

	int tmp;
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		data.insert(tmp);
	}

	while (data.size() > 1)
	{
		tmp = 0;
		is = data.begin();
		tmp += *is;
		data.erase(is);
		

		is = data.begin();
		tmp += *is;
		data.erase(is);

		data.insert(tmp);

		sum += tmp;
	}

	cout << sum << endl;

	system("pause");
	return 0;
}