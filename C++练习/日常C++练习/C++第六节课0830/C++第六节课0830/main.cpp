#include <iostream>

using namespace std;

class Test2{
public:
	int b;
	
	explicit Test2(char a) : b(a){
	
	}
	
	Test2(int i, int s){
		b = i;
	}
};


class Test{
public:
	int a = 5;
	const int i;
	int & ri;
	Test2 t2;

	Test(int & a) : i(3), ri(a), t2(a, 3) {	//���캯��д�ڴ��������Ǹ���ֵ,д��ð�ź���ǳ�ʼ��

	}
};

int main1(){

	//int c = 8;
	//Test a(c);

	//Test2 b = 1;		explicit��֯���ι���Ĳ��淶����

	//cout << a.t2.b << endl;

	//cout << b.b << endl;

	int i = 8;
	int j = 9;

	Test2 a(i);
	Test2 b = a;

	Test2 c(j);
	c = b;

	//i = 6;

	//cout << b.ri << endl;

	cout << c.b << endl;

	system("pause");
	return 0;
}





