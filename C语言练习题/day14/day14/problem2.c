#include <stdio.h>
#include <stdlib.h>

//ѧϰstatic���徲̬�������÷�
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