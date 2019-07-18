#include <stdio.h>
#include <stdlib.h>

int f(int a){	//形参只是实参的一份拷贝,所以修改形参,并不会影响a的值
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return (a);
}
int main2_1(){
	int a = 2, i, k;
	for (i = 0; i < 2; i++){
		k = f(a++);
	}
	printf("%d\n", k);	//结果为4
	system("pause");
	return 0;
}