#include <iostream>

using namespace std;

//��̬������̨��, һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
//�����������һ��n����̨���ܹ��ж� ����������

int FrogSteps(int n)
{
	return pow(2, n - 1);
}

int main2()
{
	int n;
	cin >> n;

	cout << FrogSteps(n) << endl;

	system("pause");
	return 0;
}