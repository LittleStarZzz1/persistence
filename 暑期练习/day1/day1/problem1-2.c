#include <stdio.h>
#include <stdlib.h>

int main2(){
	int i, j, a = 0;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
			if (j % 2){
				break;
			}
			a++;
		}
		a++;
	}
	printf("%d\n", a);	//������Ϊ4
	system("pause");
	return 0;
}
