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
	//		throw bad_cast("����ָ�벻��ת��Ϊ����ָ��");
	//	}
	//}

	//catch (bad_cast & x)
	//{
	//	cout << x.what();
	//}


	try
	{
		vector<int> v;

		v.at(10) = 0; //���ص���һ��ָ��λ��n��ֵ�����ã��÷����Զ����n�Ƿ���һ����Ч�ķ�Χ�ڣ�������ڽ��׳�out_of_range�쳣
	}

	catch (out_of_range &x)
	{
		cout << x.what();
	}

	system("pause");
	return 0;
}