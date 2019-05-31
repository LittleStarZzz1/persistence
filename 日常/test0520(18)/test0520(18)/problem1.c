#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrcpy
char*  my_strcpy(char* str1, const char* str2){
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (*(str1++) = *(str2++));
	return ret;
}
int main1(){
	char str1[20] = "";
	char str2[20] = "12345678";
	my_strcpy(str1, str2);
	puts(str1);
	system("pause");
	return 0;
}