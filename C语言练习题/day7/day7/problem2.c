#include <stdio.h>
#include <stdlib.h>

//һ�������ǡ�õ�����������֮��,������ͳ�Ϊ"����".
//����6 = 1 + 2 + 3.
//�ҳ�1000���ڵ���������
int main2(){
	int i;
	int j;
	int sum = 0;
	int count = 0;
	int a[20] = { 0 };
	printf("1-1000֮�����ȫ����: ");
	for (i = 1; i <= 1000; ++i){
		for (j = 1; j < i; ++j){
			if (i % j == 0){
				a[count] = j;
				++count;
			}
		}
		for (j = 0; j < count; ++j){
			sum += a[j];
		}
		if (i == sum){
			printf("%d ", i);
		}
		sum = 0;
		count = 0;	//�н�sum��countҪ�ǵ�ǿ�ƹ�0
	}
	printf("\n");
	system("pause");
	return 0;
}