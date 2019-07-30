#include <stdio.h>
#include <stdlib.h>

int main1_1(){
	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 2) += 2;
	printf("%d, %d\n", *pulPtr, *(pulPtr + 2));
	system("pause");
	return 0;
}