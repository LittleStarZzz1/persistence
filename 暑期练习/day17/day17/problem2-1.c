#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(int b[][3]){
	++b;
	b[1][1] = 9;
}
int main2_1(){
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	foo(a);
	printf("%d\n", a[2][1]);	//9
	system("pause");
	return 0;
}
