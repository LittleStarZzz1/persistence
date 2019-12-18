#include <iostream>

using namespace std;

class ct{	//类是一个特殊的结构体(或者说结构体是一个简化的类)
	int a;	//成员变量
public:				//访问限定符只在编译的过程中有用,内存中没有任何权限			
	double b;
	char c;	//24

	void test(){

	}

	void changeA(int i){
		this->a = i;	//this指针可以省略
	}

	void printA(){	//C++中成员函数中可以直接使用自己的成员变量
		printf("%d\n", a);
	}
protected:
	void printB();	//成员函数不吃struct的空间(只是被划分在struct这个作用域),需要时调用即可
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