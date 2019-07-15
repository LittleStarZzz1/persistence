#include <stdio.h>
#include <stdlib.h>

#define F(X, Y) ((X) + (Y))
int main1_2(){
	int a = 3, b = 4;
	printf("%d\n", F(a++, b++));
	system("pause");
	return 0;
}