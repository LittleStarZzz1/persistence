#include <iostream>

using namespace std;

//变态青蛙跳台阶, 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
//求该青蛙跳上一个n级的台阶总共有多 少种跳法。

int FrogSteps(int n)
{
	return pow(2, n - 1);
}

int main2()
{
	int n;
	cin >> n;

	cout << FrogSteps(n) << endl;

	system("pause");
	return 0;
}