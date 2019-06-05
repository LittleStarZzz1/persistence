#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
//strerror例子
int main6(){
	FILE* pfile;	//文件类型的指针
	pfile = fopen("unexist.ent", "r");	//打开这个文件已"r"方式(只读)
	if (pfile == NULL){
		printf("Error opening file unexist.ent : %s\n", strerror(errno));
	}
	system("pause");
	return 0;
}