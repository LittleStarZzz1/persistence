#include <stdio.h>
#include <stdlib.h>

int main2_3(){
	int x;
	x = 4;
	x += x *= x + x;
	printf("%d\n", x);
	system("pause");
	return 0;
}