#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int flag = 0;
	int n;
	int i;
	for (n = 2; n <= 1000; ++n){
		int tmp = sqrt(n);
		for (i = 2; i <= tmp; ++i){
			if (n % i == 0){
				flag = 1;
				break;
			}
		}
		if (flag == 0){
			printf("%d\n",n);
		}
		flag = 0;
	}
	system("pause");
	return 0;
}