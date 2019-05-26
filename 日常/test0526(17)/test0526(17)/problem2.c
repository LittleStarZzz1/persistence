#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现strcat
char* my_strcat(char* str1, const char* str2){
	assert(str1);
	assert(str2);
	while (*(str1++));
	str1--;
	while (*(str1++) = *(str2++));
	return str1;
}
//模拟实现strncat
char* my_strncat(char* str1, char* str2, int size){
	assert(str1);
	assert(str2);
	while (*(str1++));
	str1--;
	while (size){
		*(str1++) = *(str2++);
		--size;
	}
	return str1;
}
int main(){
	char str1[30] = "abcdefg";
	char str2[30] = "1234567";
	my_strcat(str1, str2);
	puts(str1);
	my_strncat(str1, str2, 5);
	puts(str1);
	system("pause");
	return 0;;
}