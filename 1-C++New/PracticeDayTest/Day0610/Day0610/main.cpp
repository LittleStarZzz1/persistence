#include <iostream>

//��ʹ��+�ź����������������,�����������ĺ�
int addAB(int a, int b)
{
	if (b == 0)
		return a;
	int _sum = a ^ b;//��λ��������Ķ�����λ�ۼ�,��ʱ��δ���ǽ�λ���
	int flag = (a & b) << 1;//���ǽ�λ

	//�ݹ齫��λ��������ۼ�
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