#include <stdio.h>
#include <stdlib.h>

int main2_2(){
	int a;
	int b;
	printf("%d\n", (a = 2, b = 5, a++, b++, a + b));	//9
	system("pause");
	return 0;
}