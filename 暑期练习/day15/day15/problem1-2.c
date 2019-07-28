#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main1_2(){
	char str[] = "ABCDEFG";
	char *p1, *p2;
	p1 = "abcd";
	p2 = "efgh";
	strcpy(str + 1, p2 + 1);
	strcpy(str + 3, p1 + 3);
	printf("%s\n", str);	//Adgd,×¢Òâ»á½«'\0'¿½±´
	system("pause");
	return 0;
}