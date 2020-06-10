#include <iostream>

//不使用+号和其他的算术运算符,计算两个数的和
int addAB(int a, int b)
{
	if (b == 0)
		return a;
	int _sum = a ^ b;//按位异或将两数的二进制位累加,此时并未考虑进位情况
	int flag = (a & b) << 1;//考虑进位

	//递归将进位结果继续累加
	return addAB(_sum, flag);
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << addAB(a, b) << std::endl;

	system("pause");
	return 0;
}