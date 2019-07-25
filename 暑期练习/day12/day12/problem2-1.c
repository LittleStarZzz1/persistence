#include <stdio.h>
#include <stdlib.h>

int f(int x, int y){
	return (x&y) + ((x^y) >> 1);
}
int main2_1(){
	int result = f(2, 4);
	printf("%d\n", result);
	system("pause");
	return 0;
}