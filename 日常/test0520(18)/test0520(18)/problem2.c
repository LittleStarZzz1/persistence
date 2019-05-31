#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrcat
char* my_strcat(char* str1, const char* str2){
	assert(str1);
	assert(str2);
	char* ret = str1;
	while (*str1++);
	str1--;
	while (*str1++ = *str2++);
	return ret;
}
int main2(){
	char str1[30] = "abcdrfghi";
	char str2[20] = "12345678";
	my_strcat(str1, str2);
	puts(str1);
	system("pause");
	return 0;
}