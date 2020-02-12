#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[] = "abcdefgh", *p = s; 
	p += 3; 
	printf("%d\n", strlen(strcpy(p, "ABCD")));

	system("pause");
	return 0;
}