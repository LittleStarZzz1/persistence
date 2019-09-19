#include <iostream>
//使用using关键字,可以引用一个名字空间,使得这个名字空间内的所有内容
//对自己可见
using namespace std;

//如果两个名字空间里有分别有相同的一个函数,那么即使我同时使用using引用了
//两个名字空间,那么也不会报错,除非我使用了这个函数(因为使用函数会产生歧义,
//也就是不知道该调用哪个).
#include "t1.h"
#include "t2.h"
using namespace t1;
using namespace t2;


//1.命名空间可以解决任何函数,全局变量名重复的问题,包在不同的名字空间里的重复
//函数实际上就是两个完全无关的函数

//2.命名空间允许嵌套,嵌套内部和外部没有任何关系
namespace test{
	namespace n1{
		int add(int a, int b){
			std::cout << "1\n";
			return a + b;
		}
	}
	namespace n2{
		int add(int a, int b){
			std::cout << "1.1\n";
			return a + b;
		}
	}
}
//3.名字空间允许重名,重名的名字空间会被合并.
namespace n1{
	int sub(int a, int b){
		std::cout << "3\n";
		return a - b;
	}
}

namespace n1{
	int add(int a, int b){
		std::cout << "2\n";
		return a + b;
	}
}

//一.名字空间(namespace)
// 1.名字空间可以解决函数,全局变量名重复的问题,包在不同的名字空间里的重复
//函数实际上就是两个完全无关的函数
// 2.名字空间允许嵌套,嵌套内部和外部没有任何关系.
// 3.名字空间允许重名,重名的名字空间会被合并.

//名字空间是用来定义作用域的.
//它解决了C语言中只能用文件划分作用域的缺陷.

//使用using关键字,可以引用一个名字空间,使得这个名字空间内的所有内容
//对自己可见

//如果两个名字空间里有一个相同的函数,那么即使我同时使用using引用了两个名字
//空间,那么也不会报错,除非我使用了这个函数(因为使用函数会产生歧义,也就是不
//知道该调用哪个).

int add(int a, int b){
	return a + b;
}

namespace test1
{
	int a = 5;
}

//using namespace test1;
int main(){
	//cout << add(2, 3) << "\n";
	cout << a;


	system("pause");
	return 0;
}


//int main()
//{
//	std::cout << n1::sub(1, 2);
//
//	system("pause");
//	return 0;
//}