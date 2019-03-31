#include <stdio.h>
#include <stdlib.h>

int Factor(int n){
	int ret = 1;
	for (int i = 1; i <= n; ++i){
		ret *= i;
	}
	return ret;
}
int main1(){
	printf("%d\n",Factor(5));
	system("pause");
	return 0;
}