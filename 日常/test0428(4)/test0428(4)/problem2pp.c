#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//�ж�0-99999֮��İ�ķ˹������
int main2pp(){
	int n;
	int a[10] = { 0 };
	int i;
	int sum = 0;
	int count = 0;
	//���ڲ�ȷ������λ��,������һ�����齫ÿһλ������,������count�������ֵ�λ��
	for (n = 0; n < 100000; ++n){
		for (i = n; i; i /= 10){
			a[count] = i % 10;
			++count;
		}
		for (i = 0; i < count; ++i){
			sum += pow(a[i], count);
		}
		if (n == sum){
			printf("%d ", n);
		}
		count = sum = 0;	//ǿ�ƽ�count��sum��0
	}
	system("pause");
	return 0;
}