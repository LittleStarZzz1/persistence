#include <iostream>

using namespace std;

//被赋值的参数列表不能再声明和定义中同时出现,只出现一次
void func(int a, int b, int c);

//在函数的参数列表中,允许存在被赋值的参数
//如果传入了参数,那么会取传入的值,如果没有传入,会取函数定义时被赋予的值(默
//认值)
//这些参数必须位于参数列表的尾部,不能穿插
void func(int a, int b = 20, int c = 30){
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}


void swapArgs(int * pa, int * pb){
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
void swapArgs(float * pa, float * pb){
	float tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//C++允许两个重名函数同时存在,但他们的参数列表不能完全相同,哪怕返回值的
//类型不同也不可以

int	add(short a, short b){
	cout << "2\n";
	return a + b;
}
//short add(short a, short b){
//	cout << "1\n";
//	return a + b;
//}

//二. 函数重载
//C++允许两个重名函数同时存在,但他们的参数列表不能完全相同,哪怕返回值的类型
//不同也不可以

//缺省参数:
//函数的参数列表中,允许存在被赋值的参数,这些参数具备以下特点:
//1. 如果传入了参数,那么会取传入的值,如果没有传入,会取函数定义时被赋予的值(
//默认值).
//2. 这些参数必须位于参数列表的尾部,不能穿插
//3. 被赋值的参数列表不能再声明和定义中同时出现,只能出现一次.


int main2(){
	//func();
	func(1);
	func(1, 2);
	func(1, 2, 3);


	int a = 6, b = 8;
	float c = 3.14, d = 0.618;
	
	swapArgs(&a, &b);
	swapArgs(&c, &d);

	cout << a << " " << b << endl;
	cout << c << " " << d << endl;

	//cout << add(1, 3) << endl;
	system("pause");
	return 0;
}




