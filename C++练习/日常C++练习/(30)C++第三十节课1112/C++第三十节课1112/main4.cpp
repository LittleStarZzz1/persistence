#include <iostream>
#include <vector>

using namespace std;

class Base{
public:
	int m_b = 5;

	virtual void func()
	{

	}
};

class Test : public Base
{

};

int main4()
{
	//try
	//{
	//	Base b;

	//	Test * t = dynamic_cast<Test *>(&b);

	//	if (!t)
	//	{
	//		throw bad_cast("父类指针不能转换为子类指针");
	//	}
	//}

	//catch (bad_cast & x)
	//{
	//	cout << x.what();
	//}


	try
	{
		vector<int> v;

		v.at(10) = 0; //返回的是一个指向位置n的值的引用，该方法自动检测n是否在一个有效的范围内，如果不在将抛出out_of_range异常
	}

	catch (out_of_range &x)
	{
		cout << x.what();
	}

	system("pause");
	return 0;
}