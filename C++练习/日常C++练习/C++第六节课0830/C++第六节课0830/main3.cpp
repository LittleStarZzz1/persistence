#include <iostream>

using namespace std;


class TestSt{
public:
	int a;
	static int m_s_i;	//静态成员变量只能在类外初始化

	TestSt(){
		m_s_i++;
	}

	static void tests(TestSt & a){	//没有this指针
		//a = 3;
		m_s_i;	//可以访问静态成员变量
		a.a = 3;
	}

};

int TestSt::m_s_i = 0;

int main(){

	TestSt t1;

	//cout << t1.m_s_i << endl;

	cout << TestSt::m_s_i << endl;

	system("pause");
	return 0;
}



