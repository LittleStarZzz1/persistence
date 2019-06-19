#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//对文件的格式化输出
int main2(){
	FILE* fpr = NULL;
	char str[20] = "";
	int a;
	fpr = fopen("C:\\Users\\lenovo\\Desktop\\2.txt", "r");
	if (fpr == NULL){
		printf("open fail!\n");
	}
	fscanf(fpr, "%d", &a);
	//puts(str);
	printf("%d\n", a);
	fclose(fpr);
	fpr == NULL;
	system("pause");
	return 0;
}