#include <stdio.h>
#include <stdlib.h>

//����һ����������,������������Ҳ�и���
//������һ���������Ķ���������һ��������
//������������ĺ͵����ֵ
//�������������Ϊ{ 1, -2, 3, 10, -4, 7, 2, -5 }
//����������Ϊ{ 3, 10, -4, 7, 2 },������Ϊ��������ĺ�Ϊ18
int main(){
	int a[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int n = sizeof(a) / sizeof(a[0]);
	int MAX = 0;
	int sum = 0;
	int i;
	for (i = 0; i <= n; ++i){
		sum += a[i];
		if (sum > 0){
			if (sum > MAX){
				MAX = sum;
			}
		}
		else {
			sum = 0;
		}
	}
	printf("%d\n", MAX);
	system("pause");
	return 0;
}