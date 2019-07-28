#include <stdio.h>
#include <stdlib.h>

int main1_1(){
	char a[] = "123456789", *p = a;
	int i = 0;
	while (*p){
		if (i % 2 == 0){
			*p = '!';
		}
		i++;
		p++;
	}
	puts(a);
	system("pause");
	return 0;
}