#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//Ä£ÄâÊµÏÖmemmove
char* my_memmove(char* str1, const char* str2, unsigned int n){
	assert(str1);
	assert(str2);
	char* ret = (char*)str1;
	if ((char*)str2 > (char*)str1 || (char*)str2 + n < (char*)str1){
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
int main(){
	char a[20] = "1234567890";
	char b[20] = "qwert";
	//my_memmove(a, b, 3);
	//my_memmove(a, a + 2, 5);
	my_memmove(a + 2, a, 5);
	puts(a);
	system("pause");
	return 0;
}