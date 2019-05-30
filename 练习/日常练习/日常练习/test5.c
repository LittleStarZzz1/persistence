#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct student {
	/*int num;
	char name[20];
	int age;*/
	char c;
	int a;
	char b;
};
int main(){
	printf("%d\n", sizeof(struct student));
	system("pause");
	return 0;
}