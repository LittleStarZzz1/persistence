#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//memcpy的模拟实现
void* my_memcpy(void* str1, const void* str2, unsigned int n){
	void* ret = str1;
	assert(str1);
	assert(str2);
	while (n){
		*(char*)str1 = *(char*)str2;
		str1 = (char*)str1 + 1;
		str2 = (char*)str2 + 1;
		--n;
	}
	return ret;
}
int main8(){
	char str1[20] = "abcdefghi";
	char str2[20] = "123";
	my_memcpy(str1, str2, 1);
	puts(str1);
	system("pause");
	return 0;
}