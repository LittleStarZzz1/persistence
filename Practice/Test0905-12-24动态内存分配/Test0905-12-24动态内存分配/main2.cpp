#include <iostream>

using namespace std;

int main()
{
	//动态申请一个int类型的空间
	int * ptr = new int;

	//动态申请一个int类型的空间并初始化为10
	int * ptr1 = new int(10);

	//动态申请3个int类型的空间
	int * ptr2 = new int[3];

	delete ptr;
	delete ptr1;
	delete[] ptr2;

	system("pause");
	return 0;
}