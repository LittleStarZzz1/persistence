#include <stdio.h>
#include <stdlib.h>

//дһ������,�� unsigned int �ͱ���x���ڴ��ж�����1�ĸ���
int main3(){
	int num = 10;
	int count = 0;
	while (num != 0){
		if (num % 2 == 1){
			++count;
		}
		num = num >> 1;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}