#include <stdio.h>
#include <stdlib.h>

int main1_1(){
	char a[20];
	char* p1 = (char*)a;
	char* p2 = (char*)(a + 5);
	int n = p2 - p1;
	printf("%d\n", n);	//运行结果n = 5;
	system("pause");
	return 0;
}