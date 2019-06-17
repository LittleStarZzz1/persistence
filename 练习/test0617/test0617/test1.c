#include <stdio.h>
#include <stdlib.h>
int main1(){
	int a = 10000;
	FILE* pfw = NULL;
	pfw = fopen("C:\\Users\\Administrator\\Desktop\\1.txt", "wb");
	if (pfw == NULL){
		printf("open fail\n");
		return 0;
	}
	fwrite(&a, 4, 1, pfw);
	fclose(pfw);
	pfw = NULL;
	system("pause");
	return 0;
}