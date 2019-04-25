#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main1(){
	//ÅĞ¶Ï100-200µÄËØÊı
	int flag = 0;
	for (int n = 100; n <= 200; ++n){
		int tmp = sqrt(n);
		for (int i = 2; i <= tmp; ++i){
			if (n % i == 0){
				flag = 1;
				break;
			}
		}
		if (flag == 1){
			printf("%d ",n);
		}
		flag = 0;
	}
	system("pause");
	return 0;
}