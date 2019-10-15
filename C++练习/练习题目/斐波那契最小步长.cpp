#include <iostream>

using namespace std;

//斐波那契数列变形
//输入一个正整数N(1 ≤ N ≤ 1,000,000)
//输出最小步长变为斐波那契数

int main1()
{
	int N;
	cout << "请输入一个整数: ";
	cin >> N;
	int an_2 = 0, an_1 = 1, a_n;
	a_n = an_2 + an_1;
	while (1)
	{
		if (an_1 == N)
		{
			cout << "数字" << N << "已经是斐波那契数,步长为0" << endl;
			break;
		}
		else if (an_1 > N)
		{
			if (abs(an_1 - N) < abs(an_2 - N))
			{
				cout << "变为斐波那契数的最小步长为" << abs(an_1 - N) << endl;
				break;
			}
			else
			{
				cout << "变为斐波那契数的最小步长为" << abs(an_2 - N) << endl;
				break;
			}
		}
		an_2 = an_1;
		an_1 = a_n;
		a_n = an_2 + an_1;
	}

	system("pause");
	return 0;
}