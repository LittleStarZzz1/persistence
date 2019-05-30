#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Ä£ÄâÊµÏÖmemmove
void* my_memmove(void* str1, const void* str2, unsigned int n){
	void* ret = str1;
	if ((char*)str1 <= (char*)str2 || (char*)str2 + n <= (char*)str1){
		while (n){
			*(char*)str1 = *(char*)str2;
			str1 = (char*)str1 + 1;
			str2 = (char*)str2 + 1;
			--n;
		}
	}
	else {
		str1 = (char*)str1 + n - 1;
		str2 = (char*)str2 + n - 1;
		while (n){
			*(char*)str1 = *(char*)str2;
			str1 = (char*)str1 - 1;
			str2 = (char*)str2 - 1;
			--n;
		}
	}
	return ret;
}
int main3(){
	char str1[] = "abcdefghi";
	char str2[] = "12345";
	my_memmove(str1 + 2, str1, 3);
	puts(str1);
	system("pause");
	return 0;
}