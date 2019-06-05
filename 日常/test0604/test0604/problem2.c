#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrncmp
int my_strncmp(const char* str1, const char* str2, unsigned int n){
	int ret;
	assert(str1);
	assert(str2);
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) && *str2 && --n){
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
int main2(){
	char str1[] = "abcdef";
	char str2[] = "abcdfr";
	int ret;
	ret = my_strncmp(str1, str2, 4);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
