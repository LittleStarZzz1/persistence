#include <iostream>

using namespace std;

//关于传值, 传引用的效率比较
//以值作为参数或者返回值类型, 在传参和返回期间, 函数不会直接传递实参或者将变量本身直接返回, 而是传递实参或者
//返回变量的一份临时的拷贝, 因此用值作为参数或者返回值类型, 效率是十分低下的, 尤其是当参数或者返回值类型非常大时, 
//效率就更低

struct A{
	int a[10000];
};

void test1(A & a)
{

}

void test2(A a)
{

}

int main1()
{
	A a;

	for (int i = 0; i < 100000; ++i)
	{
		test2(a);
	}


	system("pause");
	return 0;
}