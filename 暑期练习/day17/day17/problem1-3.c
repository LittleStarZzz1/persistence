#include <stdio.h>
#include <stdlib.h>

int main1_3(){
	char* szStr = "abcde";
	szStr += 2;
	printf("%lu\n", szStr);
	system("pause");
	return 0;
}