#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

//用来表示分数的结构体
struct fraction
{
	long long _up;//分子
	long long _down;//分母
};

//获取最大公约数,方便分数的化简
long long getGcd(int a, int b)
{
	if (b == 0)
		return a;
	return getGcd(b, a % b);
}

//分数的化简
fraction reduction(fraction frac)
{
	//首先处理分母为负数的情况
	if (frac._down < 0)
	{
		frac._up = -frac._up;//将分子变为正数
		frac._down = -frac._down;//保证分母非负
	}

	if (frac._up == 0)
		frac._down = 1;
	else
	{
		//分数化简
		long long gcd = getGcd(abs(frac._up), frac._down);
		frac._up /= gcd;
		frac._down /= gcd;
	}
	return frac;
}

//分数加法
fraction fractionAdd(fraction a, fraction b)
{
	fraction res;
	res._up = a._up * b._down + b._up * a._down;
	res._down = a._down * b._down;
	return res;
}

//分数减法
fraction fractionSub(fraction a, fraction b)
{
	fraction res;
	res._up = a._up * b._down - b._up * a._down;
	res._down = a._down * b._down;
	return res;
}

//分数乘法
fraction fractionMul(fraction a, fraction b)
{
	fraction res;
	res._up = a._up * b._up;
	res._down = a._down * b._down;
	return res;
}

//分数除法
fraction fractionDiv(fraction a, fraction b)
{
	fraction res;
	res._up = a._up * b._down;
	res._down = a._down * b._up;
	return res;
}

//分数的打印
void fractionPrint(fraction a)
{
	a = reduction(a);//先将分数化简

	if (a._up < 0)//分子小于0,需要用括号包起来
		cout << '(';
	if (a._down == 1)
		cout << a._up;//分母为1
	else if (abs(a._up) > a._down)
	{
		cout << a._up / a._down << ' ' << abs(a._up) % a._down << '/' << a._down;
	}
	else
	{
		cout << a._up << '/' << a._down;
	}
	if (a._up < 0)
		cout << ')';
}

int main()
{
	fraction a, b;

	scanf("%lld/%lld %lld/%lld", &a._up, &a._down, &b._up, &b._down);

	fractionPrint(a);
	cout << ' ' << '+' << ' ';
	fractionPrint(b);
	cout << ' ' << '=' << ' ';
	fractionPrint(fractionAdd(a, b));
	cout << '\n';

	fractionPrint(a);
	cout << ' ' << '-' << ' ';
	fractionPrint(b);
	cout << ' ' << '=' << ' ';
	fractionPrint(fractionSub(a, b));
	cout << '\n';

	fractionPrint(a);
	cout << ' ' << '*' << ' ';
	fractionPrint(b);
	cout << ' ' << '=' << ' ';
	fractionPrint(fractionMul(a, b));
	cout << '\n';

	fractionPrint(a);
	cout << ' ' << '/' << ' ';
	fractionPrint(b);
	cout << ' ' << '=' << ' ';
	if (b._up == 0)
		cout << "Inf" << '\n';
	else
	{
		fractionPrint(fractionDiv(a, b));
		cout << '\n';
	}
	return 0;
}