#include <iostream>
#include <vector>

//С�׵�����֮·
using namespace std;

//���������Լ��
int maxCommonNum(int num1, int num2)
{
	int tmp = 0;
	while (num2)
	{
		tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}
	return num1;
}
int main()
{
	int n, a;
	while (cin >> n >> a)
	{
		vector<int> v;
		v.resize(n);
		for (int i = 0; i < n; ++i)
			cin >> v[i];
		for (auto& e : v)
		{
			if (e <= a)
				a += e;
			else
				a = a + maxCommonNum(a, e);
		}
		cout << a << endl;
	}


	return 0;
}