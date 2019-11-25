#include <iostream>

using namespace std;

//将一个字符串转换为数字，返回值用来校验转换是否成功
bool strtoi(const char * src, int & res)
{
	if (!src)
	{
		return false;
	}

	if (*src <= ' ')
	{
		src++;
	}

	int flag = 1;
	if (*src == '-')
	{
		flag = -1;
		src++;
	}

	if (*src < '0' || *src > '9')
	{
		return false;
	}

	int sum = 0;
	int tmp;
	int i;
	for (i = 0; src[i] <= '9' && src[i] >= '0'; ++i)
	{
		tmp = src[i] - '0';
		sum = sum * 10 + tmp;
	}

	res = sum * flag;

	return true;

}

int main()
{
	int res;

	if (strtoi("-123asdas45", res))
	{
		cout << res << endl;
	}
	else
	{
		cout << "fail\n";
	}

	system("pause");
	return 0;
}