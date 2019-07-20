#include <stdio.h>
#include <stdlib.h>

int main2_2(){
	char* pcColor = "blue1";
	char acColor[] = "blue1";
	printf("%d\n", strlen(pcColor));	//5
	printf("%d\n", strlen(acColor));	//5
	printf("%d\n", sizeof(pcColor));	//4
	printf("%d\n", sizeof(acColor));	//6

	system("pause");
	return 0;
}