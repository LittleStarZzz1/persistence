#include <stdio.h>
#include <stdlib.h>

//学习static定义静态变量的用法
void func(){
	int a = 0;
	static int static_a = 0;
	printf("a = %d\n", a);
	printf("static_a = %d\n", static_a);
	a++;
	static_a++;
}
int main2(){
	int i;
	for (i = 0; i < 3; ++i){
		func();
	}
	system("pause");
	return 0;
}