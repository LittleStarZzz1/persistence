#include <iostream>

using namespace std;


class TestSt{
public:
	int a;
	static int m_s_i;	//��̬��Ա����ֻ���������ʼ��

	TestSt(){
		m_s_i++;
	}

	static void tests(TestSt & a){	//û��thisָ��
		//a = 3;
		m_s_i;	//���Է��ʾ�̬��Ա����
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



