#include <stdio.h>
#include <stdlib.h>

int main2_2(){
	int k, j, s;
	for (k = 2; k < 6; k++, k++){
		s = 1;
		for (j = k; j < 6; j++){
			s += j;
		}
	}
	printf("%d\n", s);	//结果为10,注意s重新赋值为1
	system("pause");
	return 0;
}