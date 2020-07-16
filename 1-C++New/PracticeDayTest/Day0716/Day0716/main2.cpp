#include <iostream>
#include <vector>

using namespace std;

//发邮件
int main()
{
	int n;
	vector<long long> v(21, 0);
	v[1] = 0;
	v[2] = 1;
	//v[i]表示i个人编号与位置不匹配的情况
	//首先第一个人拿到不属于自己邮件的情况为 i - 1;
	//当第一个与第二个人恰好互相拿到对方邮件时，转化为v[i - 2]的子问题，(i - 1)*v[i - 2]
	//当第二个人没有恰好拿到第一个人的邮件，就变为(i - 1) * v[i - 1]
	for (int i = 3; i < 21; ++i)
		v[i] = (i - 1) * (v[i - 1] + v[i - 2]);
	while (cin >> n)
	{
		cout << v[n] << endl;
	}

	return 0;
}