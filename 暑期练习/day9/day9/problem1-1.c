#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Func(char str_arg[2]){
	int m = sizeof(str_arg);
	int n = strlen(str_arg);
	printf("%d\n", m);
	printf("%d\n", n);
}
int main1_1(){
	char str[] = "Hello";
	Func(str);
	system("pause");
	return 0;
}