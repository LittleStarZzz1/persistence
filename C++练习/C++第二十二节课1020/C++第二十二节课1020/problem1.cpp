#include <iostream>

using namespace std;

//求 1+2+3+...+n, 要求不可以使用乘除法
//不可以使用 for, while, if, else, switch, case等关键字及条件判断语句(A ? B : C)

//递归方法

#if 0
int Sum_Solution(int n)
{
	int a = 1;
	n > 1 && (a = n + Sum_Solution(n - 1));
	return a;
}

#else

//利用静态成员变量去做
class test{
public:
	static int s_m_tmp;
	static int s_m_sum;

	test()
	{
		s_m_tmp++;
		s_m_sum += s_m_tmp;
	}
};

int test::s_m_sum = 0;
int test::s_m_tmp = 0;

#endif




int main()
{
	test * t = new test[100];

	cout << test::s_m_sum << endl;

	delete[] t;

	system("pause");
	return 0;
}