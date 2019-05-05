#include <stdio.h>
#include <stdlib.h>
//有一个字符数组的内容为:"student a am i"
//请你将数组的内容改为"i am a student"
void reverse_string(char* str, int i, int j){
	for (; i < j; ++i, --j){
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}
void reverse_word(char* str){
	int start = 0;
	int end = 0;
	int i;
	for (i = 0; str[i]; ++i){
		if (str[i] == ' '){
			end = i - 1;
			reverse_string(str, start, end);
			start = i + 1;
		}
	}
	reverse_string(str, start, i - 1);
	reverse_string(str, 0, i - 1);
}
int main(){
	char str[] = "student a am i";
	reverse_word(str);
	printf("%s\n",str);
	system("pause");
	return 0;
}