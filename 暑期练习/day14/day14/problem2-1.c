#include <stdio.h>
#include <stdlib.h>

int main2_1(){
	int a = 2, *p1, **p2;
	p2 = &p1;
	p1 = &a;
	a++;
	printf("%d, %d, %d\n", a, *p1, **p2);
	system("pause");
	return 0;
}