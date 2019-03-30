#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int pwdjudge(char pwd[]){
	char input[21] = { 0 };
	int i;
	for (i = 0; i < 3; ++i){
		scanf("%s",&input);
		if (strcmp(input, pwd) == 0){
			return 1;
		}
	}
	return 0;
}
int main4(){
	
	char pwd[20] = "abcdef";
	if (pwdjudge(pwd) ){
		printf("µÇÂ½³É¹¦!\n");
	}
	else {
		printf("µÇÂ¼Ê§°Ü!\n");
	}
	system("pause");
	return 0;
}