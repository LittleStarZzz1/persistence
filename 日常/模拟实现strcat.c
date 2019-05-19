#include <stdio.h>
#include <stdlib.h>
//Ä£ÄâÊµÏÖstrcat
char* my_strcat(char* str1, const char* str2){
	char* tmp = str1;
	while (*(str1++));
	str1--;
	while (*(str1++) = *(str2++));
	return tmp;
}
int main(){
	char str1[20] = "abcdef";
	char str2[20] = "123456";
	my_strcat(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}