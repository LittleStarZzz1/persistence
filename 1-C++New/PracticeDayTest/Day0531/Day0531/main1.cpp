#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//̰���㷨,����3*n����, ÿ����һ��, ��ûһ����ѡ���ڶ������
//Ҫ�����յõ�����
int main(){
	int n;
	while (cin >> n)
	{
		vector <int> v;
		v.resize(n * 3);
		for (int i = 0; i < n * 3; ++i)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		long long ret = 0;

		for (int i = n; i < n * 3; i += 2)
		{
			ret += v[i];
		}

		cout << ret << endl;
	}
	system("pause");
	return 0;
}