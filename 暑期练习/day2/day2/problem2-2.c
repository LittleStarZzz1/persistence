#include <stdio.h>
#include <stdlib.h>

int main2_2(){
	int a = 10;
	int res;
	res = a += a *= a -= a / 3;
	printf("res = %d\n", res);
	system("pause");
	return 0;
}