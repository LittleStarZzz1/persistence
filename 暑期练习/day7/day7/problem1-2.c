#include <stdio.h>
#include <stdlib.h>

int a = 1;
void test(){
	int a = 2;
	a += 1;
}
int main1_2(){
	test();
	printf("%d\n", a);
	system("pause");
	return 0;
}