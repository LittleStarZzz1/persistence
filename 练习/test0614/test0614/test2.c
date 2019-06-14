#include <stdio.h>
#include <stdlib.h>
int main(){
	int* p = calloc(10, sizeof(int));
	if (p != NULL){
		//说明空间开辟成功
		//使用动态开辟的空间
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}