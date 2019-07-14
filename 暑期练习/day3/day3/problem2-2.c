#include <stdio.h>
#include <stdlib.h>

int main2_2(){
	int x, z;
	int y = 3;
	x = z = 2;
	if (x > y){
		z = 1;
	}
	else if (x == y){
		z = 0;
	}
	else {
		z = -1;
	}
	printf("%d\n", z);
	system("pause");
	return 0;
}