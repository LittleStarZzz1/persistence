#include <stdio.h>
#include <stdlib.h>

int main2_3(){
	int i = 0;
	int count = 0;
	while (i < 10){		//��whileѭ��ѭ���� ���� ��.
		//printf("%d\n", i);
		if (i < 1) continue;
		if (i == 5) break;
		i++;
		//printf("%d\n", i);
	}
	//printf("%d\n", count);
	system("pause");
	return 0;
}