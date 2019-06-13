#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)
struct student{
	int a;	
	char b;
};

int main_(){
	printf("%d\n", sizeof(struct student));
	system("pause");
	return 0;
}