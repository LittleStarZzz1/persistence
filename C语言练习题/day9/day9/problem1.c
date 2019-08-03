#include <stdio.h>
#include <stdlib.h>


//Çó1+2!+3!+...+20!
int main1(){
	int res = 1;
	int sum = 0;
	int i;
	for (i = 1; i <= 20; ++i){
		res *= i;
		sum += res;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}