#include <iostream>

//�����������ж��ܷ񹹳�������
int main()
{
	double a, b, c;
	while (std::cin >> a >> b >> c)
	{
		if (a > b)
			std::swap(a, b);//��֤a <= b
		if (b < c)
			std::swap(b, c);//��֤b <= c
		if ((a + b > c) && (b - a < c))
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
	}

	return 0;
}