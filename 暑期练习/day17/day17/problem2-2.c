#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2_2(){
	int x = 0, y = 0, z = 0;
	z = (x == 1) && (y = 2);
	printf("%d ", y);	//0
	system("pause");
	return 0;
}