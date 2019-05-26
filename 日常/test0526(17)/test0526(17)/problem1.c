#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现strcpy
char* my_strcpy(char* str1, const char* str2){
	assert(str1);
	assert(str2);
	while (*(str1++) = *(str2++));
	return str1;
}
//模拟实现strncpy
char* my_strncpy(char* str1, const char* str2, int size){
	assert(str1);
	assert(str2);
	while (size){
		*str1++ = *str2++;
		--size;
	}
	return str1;
}
int main1(){
	char str1[20] = "abcdefgh";
	char str2[20] = "1232435436asdas";
	my_strncpy(str1, str2, 2);
	puts(str1);
	my_strcpy(str1, str2);
	puts(str1);
	system("pause");
	return 0;
}