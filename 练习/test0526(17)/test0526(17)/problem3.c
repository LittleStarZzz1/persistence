#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现strcmp
int my_strcmp(const char* str1, const char* str2){
	assert(str1);
	assert(str2);
	int ret;
	while (!(ret = *(unsigned char*)str1 - *(unsigned char*)str2) &&
		*str2){
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
//模拟实现strncmp
int my_strncmp(const char* str1, const char* str2, unsigned int n){
	assert(str1);
	assert(str2);
	while (n && (*str1 == *str2)){
		if (*str1 == '\0'){
			return 0;
		}
		str1++;
		str2++;
		n--;
	}
	if (n == 0){
		return 0;
	}
	else {
		int ret = *str1 - *str2;
		if (ret > 0){
			return 1;
		}
		else {
			return -1;
		}
	}
}
int main(){
	char str1[] = "abc";
	char str2[] = "abcadasfasf";
	printf("%d\n", my_strcmp(str1, str2));
	printf("%d\n", my_strncmp(str1, str2, 3));
	system("pause");
	return 0;
}