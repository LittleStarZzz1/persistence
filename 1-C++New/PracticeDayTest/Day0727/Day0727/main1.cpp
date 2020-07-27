#include <iostream>
#include <vector>

using namespace std;

//24点算法
bool isTwentyFour(vector<double>& a, double result)
{
	if (a.empty())//数组为空的时候判断是否凑成24点
	{
		return result == 24;
	}
	for (int i = 0; i<a.size(); i++)
	{
		//每次取出一个数字去做运算
		vector<double> b(a);//不改变原数组, 便于回溯
		b.erase(b.begin() + i);//每取出一个数进行运算, 就删除对应的数
		if (isTwentyFour(b, result + a[i])
			|| isTwentyFour(b, result - a[i])
			|| isTwentyFour(b, result*a[i])
			|| isTwentyFour(b, result / a[i]))
			return true;
	}
	return false;
}

int main()
{
	vector<double> a(4, 0);
	while (cin >> a[0] >> a[1] >> a[2] >> a[3])
	{
		if (isTwentyFour(a, 0))
			cout << "true" << endl;
		else cout << "false" << endl;
	}
}