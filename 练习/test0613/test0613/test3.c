#include <stdio.h>
#include <stdlib.h>
//�жϴ�С��
int sys_check(){
	int a = 1;
	return *(char*)&a;
}
union Un{
	int i;
	char c;
};
union Un un;
int main3(){
	//printf("%d\n", &(un.i));
	//printf("%d\n", &(un.c));
	un.i = 0x11223344;
	un.c = 0x55;
	printf("%x\n", un.i);
	if (sys_check){
		printf("���!\n");
	}
	else {
		printf("С��!\n");
	}
	system("pause");
	return 0;
}