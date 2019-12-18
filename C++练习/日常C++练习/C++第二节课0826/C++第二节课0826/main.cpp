#include <iostream>


//接,函数重载
//1. 名字修饰
//在C语言中,名字修饰只是在函数名前加下划线,所以只要函数名相同,就会导致冲突.
//在C++中,名字修饰是由"?函数名@域名1@域名2...@@参数列表@Z"的格式构成的,包含
//a. 函数名
//b. 所在域
//c. 参数列表
//所以在C++中,以上三个必须完全相同,才会出现冲突,这就是函数重载的原理

//2. extern "C"
//使用extern "C"修饰一个语句,或者将一段代码包起来,那么这条语句或这段代码将会以C语言
//的风格进行编译

/*
extern "C"{
	int func(int a){
		return a;
	}

	int func(int a, int b){
		return a;
	}
}

int main1(){

	system("pause");
	return 0;
}
*/