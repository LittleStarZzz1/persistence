#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	int age;
	char gender;
}std[3], *p = std;
int main1_5(){
	scanf("%d", &(*p).age);
	scanf("%c", &std[0].gender);
	scanf("%c", &(p->gender));
	//scanf("%d", &std.name);	//´íÎó
	system("pause");
	return 0;
}