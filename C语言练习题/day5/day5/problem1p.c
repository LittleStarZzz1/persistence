#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//��ӡ0-99999֮���ˮ�ɻ���
int main1p(){
	int array[20] = { 0 };
	int count = 0;
	int i, j;
	int sum = 0;
	for (i = 0; i < 100000; ++i){	//���������ֱ���
		for (j = i; j; j /= 10){	//��λ����
			array[count] = j % 10;	//�������ֵ�ÿһλ����������
			++count;
		}
		for (j = 0; j < count; ++j){
			sum += pow(array[j], count);
		}
		if (sum == i){
			printf("%d ", i);
		}
		count = sum = 0;	//���ǵý�count��sumǿ�ƹ�0
	}
	printf("\n");
	system("pause");
	return 0;
}