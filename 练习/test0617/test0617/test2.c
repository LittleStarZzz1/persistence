#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE* pf = NULL;
	pf = fopen("C:\\Users\\Administrator\\Desktop\\1.txt", "w");
	if (pf == NULL){
		printf("open fail!\n");
		return 0;
	}
	fputs("nihao!", pf);
	fclose(pf);
	system("pause");
	return 0;
}