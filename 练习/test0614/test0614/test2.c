#include <stdio.h>
#include <stdlib.h>
int main(){
	int* p = calloc(10, sizeof(int));
	if (p != NULL){
		//˵���ռ俪�ٳɹ�
		//ʹ�ö�̬���ٵĿռ�
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}