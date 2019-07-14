#include <stdio.h>
#include <stdlib.h>

int main1_2(){
	int a = 5;	
	if (a = 0){	//这里的a是赋值为0,0则不执行if后的语句,执行else
		printf("%d\n", a - 10);
	}
	else {
		printf("%d\n", a++);	//a++返回自增之前的值
	}
	system("pause");
	return 0;
}