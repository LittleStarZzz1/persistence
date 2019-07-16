#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main1_3(){
	char arr[2][4];
	strcpy((char*)arr, "you");
	strcpy(arr[1], "me");
	arr[0][3] = '&';
	printf("%s\n", arr);
	system("pause");
	return 0;
}