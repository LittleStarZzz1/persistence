#include <iostream>

using namespace std;

struct A1{
	int a;
	double b;	//16
};

struct A2{
	A1 a;	//��double����
	char b;
};

//�ṹ��������ʱ���������С��������(�����ֽ��˷�)

struct A3{
	int a;	//��Ա����
	double b;
//private:
	char c;	//24

	void printA(){	//C++�г�Ա�����п���ֱ��ʹ���Լ��ĳ�Ա����
		printf("%d\n", a);
	}

	void printB();	//��Ա��������struct�Ŀռ�(ֻ�Ǳ�������struct���������),��Ҫʱ���ü���
};

void A3 :: printB(){	//C������struct��C++��struct��ȫ����һ������,C++��struct(�򻯰����)��һ����(�Լ���������)
	printf("%.2lf\n", b);
}

//�սṹ��ռһ�ֽڿռ�(.cpp�ļ���)
//C�����в�����սṹ�����


int structtest(){
	A3 test;
	test.a = 5;
	test.printA();

	test.b = 3.14;
	test.printB();

	//printf("%p %p %p\n&p\n", &test.c, &test.a, &test);
	
	printf("%d\n", sizeof(A3));
	system("pause");
	return 0;
}