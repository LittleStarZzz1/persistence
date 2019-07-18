#include <stdio.h>
#include <stdlib.h>

int fun(int a, int b){
	if (a > b){
		return (a + b);
	}
	else {
		return (a - b);
	}
}
int main1_1(){
	int x = 3, y = 8, z = 6, r;
	r = fun(fun(x, y), 2 * z);
	printf("%d\n", r);
	system("pause");
	return 0;
}