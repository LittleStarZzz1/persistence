#include <iostream>

using namespace std;

class ct{	//����һ������Ľṹ��(����˵�ṹ����һ���򻯵���)
	int a;	//��Ա����
public:				//�����޶���ֻ�ڱ���Ĺ���������,�ڴ���û���κ�Ȩ��			
	double b;
	char c;	//24

	void test(){

	}

	void changeA(int i){
		this->a = i;	//thisָ�����ʡ��
	}

	void printA(){	//C++�г�Ա�����п���ֱ��ʹ���Լ��ĳ�Ա����
		printf("%d\n", a);
	}
protected:
	void printB();	//��Ա��������struct�Ŀռ�(ֻ�Ǳ�������struct���������),��Ҫʱ���ü���
};

void ct::printB(){	
	printf("%.2lf\n", b);
}

int main(){

	ct c;
	ct d;

	ct * pc = NULL;

	c.changeA(5);

	//c.a = 4;
	c.printA();

	d.changeA(6);
	d.printA();

	//pc->printA();
	pc->test();
	
	//cout << sizeof(ct) << endl;

	system("pause");
	return 0;
}