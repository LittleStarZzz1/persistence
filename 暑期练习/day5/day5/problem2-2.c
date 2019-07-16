#include <stdio.h>
#include <stdlib.h>

#define CIR(r) r*r
int main2_2(){
	int a = 1;
	int b = 2;
	int t;
	t = CIR(a + b);
	printf("%d\n", t);
	system("pause");
	return 0;
}