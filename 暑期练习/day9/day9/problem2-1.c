#include <stdio.h>
#include <stdlib.h>

int main2_1(){
	int a, x;
	for (a = 0, x = 0; a <= 1 && !x++; a++){
		a++;
	}
	printf("%d %d", a, x);
	system("pause");
	return 0;
}