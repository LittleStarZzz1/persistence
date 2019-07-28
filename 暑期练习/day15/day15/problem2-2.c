#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main2_2(){
	int j = 4;
	int i = j;
	for (; i <= 2 * j; i++){
		switch (i / j){
		case 0:
		case 1:
			printf("*");
			break;
		case 2:
			printf("#");
		}
	}
	system("pause");
	return 0;
}