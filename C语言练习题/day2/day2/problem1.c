#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//һ������,������100��һ����ȫƽ����,�ټ���168����һ����ȫƽ����
//���ʸ����Ƕ���?
int main1(){
	int i;
	int x, y;
	for (i = -100; i < 100000; ++i){
		x = (int)sqrt(i + 100);
		y = (int)sqrt(i + 268);
		if (x * x == (i + 100) && y * y == (i + 268)){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}