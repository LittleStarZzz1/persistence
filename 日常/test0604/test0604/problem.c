#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrcmp
int my_strcmp(const char* str1, const char* str2){
	int ret;
	assert(str1);
	assert(str2);
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str2){
		str1++;
		str2++;
	}
	if (ret > 0){
		return 1;
	}
	else if (ret < 0){
		return -1;
	}
	else {
		return 0;
	}
}
int main1(){
	char str1[] = "abcdef";
	char str2[] = "abcdef";
	int ret;
	ret = my_strcmp(str1, str2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
