#include <stdio.h>
#include <stdlib.h>

int change(int* px){
	int y = 8;
	y = y - *px;
	px = &y;
	return 0;
}
int main1_2(){
	int xx = 3;
	int* py = &xx;
	change(py);
	printf("%d\n", *py);
	system("pause");
	return 0;
}