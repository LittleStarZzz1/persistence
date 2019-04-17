#include <stdio.h>
#include <stdlib.h>
int Mine_Strlen(char* str){
	int count = 0;
	while (*str != '\0'){
		++count;
		++str;
	}
	return count;
}
void reverse_S(char* str, int left, int right){
	char tmp;
	while (left < right){
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		++left;
		--right;
	}
}
char reverse_s(char* str, int size){
	int i = 0;
	int left = 0;
	int right = Mine_Strlen(str) - 1;
	while (str[i] != '\0'){
		left = i;
		while ((str[i] != ' ') && (str[i] != '\0')){
			++i;
		}
		right = i - 1;
		reverse_S(str, left, right);
		if (str[i] != '\0'){
			++str;
		}
	}
	return str;
}
int main_4(){
	char str[] = "student a am i";
	int left = 0;
	int right = Mine_Strlen(str) - 1;
	reverse_S(str,left,right);
	reverse_s(str,left,right);
	printf("%s\n",str);
	system("pause");
	return 0;
}