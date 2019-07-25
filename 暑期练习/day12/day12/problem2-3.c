#include <stdio.h>
#include <stdlib.h>

void fun(int x, int y, int* c, int* d){
	*c = x + y;
	*d = x - y;
}
int main2_3(){
	int a = 4, b = 3, c = 0, d = 0;
	fun(a, b, &c, &d);
	printf("%d %d\n", c, d);
	system("pause");
	return 0;
}