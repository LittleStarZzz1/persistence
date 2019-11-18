#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>

using namespace std;

//��һ���ǿյĵ����б����ǰn�����ִ������ĵ���
//���صĴ�Ӧ�ð����ʳ���Ƶ���ɸߵ������������ͬ�ĵ�������ͬ�ĳ���Ƶ�ʣ�����ĸ˳������

class solution
{
public:
	class compare
	{
	public:
		bool operator()(const pair<string, int> & p1, const pair<string, int> & p2)
		{
			return (p1.second > p2.second) || ((p1.second == p2.second) && (p1.first < p2.first));
		}
	};
	vector<string> topWordFrequent(vector<string> & words, int n)
	{
		vector<string> vs(n);

		map<string, int> mp;

		for (auto & i : words)
		{
			mp[i]++;
		}

#if 1

		set<pair<string, int>, compare> mst(mp.begin(), mp.end());

		set<pair<string, int>, compare>::iterator msi = mst.begin();

		int i;
		for (i = 0; i < n; ++i)
		{
			vs[i] = msi->first;
			msi++;
		}

#else

		vector<pair<string, int>> vp(mp.begin(), mp.end());
		compare cp;

		sort(vp.begin(), vp.end(), cp);

		int i;
		for (i = 0; i < n; ++i)
		{
			vs[i] = vp[i].first;
		}

#endif
		return vs;
	}
};

int main()
{
	solution s;

	vector<string> v{ "wang", "zhang", "li", "zhao", "liu", "zhang", "li", "zhao", "liu", "zhao" };

	v = s.topWordFrequent(v, 5);

	for (auto & i : v)
	{
		cout << i << ' ';
	}

	cout << endl;



	system("pause");
	return 0;
}