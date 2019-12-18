#include <iostream>

using namespace std;

void func1(int &a){
	a = 9;
}
void func(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main2(){
	//int ming = 5;
	//int &xiaoming = ming;
	//xiaoming = 6;

	//引用是给一个变量起别名,两个名字都是一个变量,所以操作谁从结果上看都一样.

	//引用是代替指针完成跨栈操作的,所以它具备指针跨栈的一切特点.

	//引用的底层实现实际是指针

	//特点:
	//1. 引用在定义时必须初始化
	//2. 一个变量可以有多个引用
	//3. 一个引用一旦引用了一个变量,就不能再 引用其他变量了

	//cout << &ming << endl;
	//cout << &xiaoming << endl;

	//cout << xiaoming << endl;

	//int a = 10;

	
	//func1(a);
	//cout << a << endl;

	//int a = 5, b = 6;
	//func(a, b);

	//printf("%d %d\n", a, b);

	const int a = 10;
	//int &ra = a;	//注意无法从const int 转换为 int &
	const int & ra = a;
	double b = 3.14;
	const double & rb = b;

	//int &c = 10;	//该句编译时会出错, c为常量
	double d = 0.618;
	//int & rd = d;	//该句编译时会出错, 类型不同(无法从double转换为 int &)


	system("pause");
	return 0;
}