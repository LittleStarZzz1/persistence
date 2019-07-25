#include <stdio.h>
#include <stdlib.h>

int main1_2(){
	char* str[3] = { "stra", "strb", "strc" };
	char* p = str[0];
	int i = 0;
	while (i < 3){
		printf("%s ", p++);
		i++;
	}
	system("pause");
	return 0;
}