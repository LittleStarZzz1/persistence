#include <stdio.h>
#include <stdlib.h>

#define MA(X,Y) (X*Y)
int main1_4(){
	int i = 5;
	i = MA(i, i + 1) - 7;
	printf("%d\n", i);	//19
	system("pause");
	return 0;
}