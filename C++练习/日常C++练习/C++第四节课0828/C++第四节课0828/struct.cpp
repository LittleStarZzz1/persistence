#include <iostream>

using namespace std;

struct A1{
	int a;
	double b;	//16
};

struct A2{
	A1 a;	//向double看齐
	char b;
};

//结构体声明的时候变量按从小到大排序(减少字节浪费)

struct A3{
	int a;	//成员变量
	double b;
//private:
	char c;	//24

	void printA(){	//C++中成员函数中可以直接使用自己的成员变量
		printf("%d\n", a);
	}

	void printB();	//成员函数不吃struct的空间(只是被划分在struct这个作用域),需要时调用即可
};

void A3 :: printB(){	//C语言中struct与C++中struct完全不是一个东西,C++中struct(简化版的类)是一个域(自己的作用域)
	printf("%.2lf\n", b);
}

//空结构体占一字节空间(.cpp文件中)
//C语言中不允许空结构体存在


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