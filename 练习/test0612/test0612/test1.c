#include <stdio.h>
#include <stdlib.h>
struct A{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
int main1(){
	printf("%d\n", sizeof(struct A));
	system("pause");
	return 0;
}