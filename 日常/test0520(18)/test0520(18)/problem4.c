#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//模拟实现strchr
//strchr是在字符串中查找字符是否存在
//找到后将该字符地址作为返回值
char* my_strchr(const char* str, char a){
	assert(str);
	char* ret = (char*)str;
	if (*ret == a){
		return ret;
	}
	while (ret++){
		if (*ret == a){
			return ret;
		}
	}
	return NULL;
}
int main4(){
	char str[] = "i am a student";
	char* p = NULL;
	if (p = my_strchr(str, '\0')){
		puts(p);
	}
	else {
		printf("没找到!\n");
	}
	system("pause");
	return 0;
}