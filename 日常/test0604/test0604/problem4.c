#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//strstr模拟实现
char* my_strstr(char* str1, const char* str2){
	char* p = (char*)str1;
	char* s1 = (char*)str1;
	char* s2 = (char*)str2;
	assert(str1);
	if (str2 == NULL){
		return NULL;
	}
	while (*p){
		s1 = p;
		s2 = (char*)str2;
		while (*s1 && *s2 && *s1 == *s2){
			++s1;
			++s2;
		}
		if (*s2 == '\0'){
			return p;
		}
		++p;
	}
}
int main4(){
	char str1[] = "abcdefggggggg";
	char str2[] = "bcdef";
	char* p = NULL;
	if (p = my_strstr(str1, str2)){
		puts(p);
	}
	else {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}