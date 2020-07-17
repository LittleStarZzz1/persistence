#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

//������ʾ�����Ľṹ��
struct fraction
{
	long long _up;//����
	long long _down;//��ĸ
};

//��ȡ���Լ��,��������Ļ���
long long getGcd(int a, int b)
{
	if (b == 0)
		return a;
	return getGcd(b, a % b);
}

//�����Ļ���
fraction reduction(fraction frac)
{
	//���ȴ����ĸΪ���������
	if (frac._down < 0)
	{
		frac._up = -frac._up;//�����ӱ�Ϊ����
		frac._down = -frac._down;//��֤��ĸ�Ǹ�
	}

	if (frac._up == 0)
		frac._down = 1;
	else
	{
		//��������
		long long gcd = getGcd(abs(frac._up), frac._down);
		frac._up /= gcd;
		frac._down /= gcd;
	}
	return frac;
}

//�����ӷ�
fraction fractionAdd(fraction a, fraction b)
{
	fraction res;
	res._up = a._up * b._down + b._up * a._down;
	res._down = a._down * b._down;
	return res;
}

//��������
fraction fractionSub(fraction a, fraction b)
{
	fraction res;
	res._up = a._up * b._down - b._up * a._down;
	res._down = a._down * b._down;
	return res;
}

//�����˷�
fraction fractionMul(fraction a, fraction b)
{
	fraction res;
	res._up = a._up * b._up;
	res._down = a._down * b._down;
	return res;
}

//��������
fraction fractionDiv(fraction a, fraction b)
{
	fraction res;
	res._up = a._up * b._down;
	res._down = a._down * b._up;
	return res;
}

//�����Ĵ�ӡ
void fractionPrint(fraction a)
{
	a = reduction(a);//�Ƚ���������

	if (a._up < 0)//����С��0,��Ҫ�����Ű�����
		cout << '(';
	if (a._down == 1)
		cout << a._up;//��ĸΪ1
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