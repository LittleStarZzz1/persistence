#include <iostream>

using namespace std;

int main()
{
	//��̬����һ��int���͵Ŀռ�
	int * ptr = new int;

	//��̬����һ��int���͵Ŀռ䲢��ʼ��Ϊ10
	int * ptr1 = new int(10);

	//��̬����3��int���͵Ŀռ�
	int * ptr2 = new int[3];

	delete ptr;
	delete ptr1;
	delete[] ptr2;

	system("pause");
	return 0;
}