#include <iostream>
#include <string>

using namespace std;

//字符串相加, 字符串相乘(大数加法和乘法)
class Solution {
public:
	string Add(string num1, string num2)
	{
		int len1 = num1.size();
		int len2 = num2.size();
		int count = abs(len1 - len2);
		if (len1 > len2)
			num2.insert(0, count, '0');
		else if (len1 < len2)
			num1.insert(0, count, '0');
		string ret;
		int len = num1.size();
		ret.resize(len);
		int step = 0;
		for (int i = len - 1; i >= 0; --i)
		{
			ret[i] = (num1[i] - '0') + (num2[i] - '0') + step + '0';
			if (ret[i] > '9')
			{
				ret[i] -= 10;
				step = 1;
			}
			else
				step = 0;
		}
		if (step == 1)
			ret.insert(0, 1, '1');
		return ret;
	}
	string multiply(string num1, string num2) {
		if (num1.size() < num2.size())
			swap(num1, num2);//保证乘数位数较少
		string ret("0");//记录每次累加结果
		for (int i = num2.size() - 1; i >= 0; --i)
		{
			int step = 0;//表示进位
			string tmp(num1);//记录每次乘积的结果
			int cur = num2[i] - '0';//乘数
			for (int j = tmp.size() - 1; j >= 0; --j)
			{
				tmp[j] = (tmp[j] - '0') * cur + step;
				if (tmp[j] > 9)
				{
					step = tmp[j] / 10;
					tmp[j] %= 10;
				}
				else
					step = 0;
				tmp[j] += '0';//转回字符
			}
			if (step > 0)
				tmp.insert(0, 1, step + '0');
			tmp.append(num2.size() - 1 - i, '0');
			ret = Add(ret, tmp);
		}
		while (ret.size() > 1 && ret[0] == '0')
		{
			ret.erase(0, 1);
		}
		return ret;
	}


};

int main()
{
	Solution s;

	cout << s.multiply("2", "3") << endl;


	system("pause");
	return 0;
}