#include <iostream>

using namespace std;

//��һ������ͨ��ָ�����ư�λ����(ֱ�Ӹ���ԭ��)
void sysReverse(int & num, int hex)
{
	int tmp;
	int i = num;
	int sum = 0;
	for (; i; i = i / hex)
	{
		tmp = i % hex;
		sum = sum * hex + tmp;
	}
	num = sum;
}

int main()
{
	int num, hex;
	cin >> num >> hex;

	sysReverse(num, hex);

	cout << num;

	system("pause");
	return 0;
}