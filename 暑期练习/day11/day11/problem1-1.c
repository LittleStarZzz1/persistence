#include <stdio.h>
#include <stdlib.h>

int fun(char* s){
	char* p = s;
	while (*p != '\0'){
		p++;
	}
	return (p - s);
}
int main1_1(){
	printf("%d\n", fun("Goodbye!"));
	system("pause");
	return 0;
}