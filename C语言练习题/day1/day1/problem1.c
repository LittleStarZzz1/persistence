#include <stdio.h>
#include <stdlib.h>

//��1,2,3,4�ĸ�����,��̼��������ɶ��ٸ�������ͬ����û���ظ����ֵ���λ��
//���Ƕ���
int main1(){
	int i;
	int j;
	int k;
	int count = 0;
	for (i = 0; i < 5; ++i){
		for (j = 0; j < 5; ++j){
			for (k = 0; k < 1; ++k){
				if (i != j && i != k && j != k){
					printf("%d%d%d ",i,j,k);
					++count;
				}
			}
		}
	}
	printf("һ����%d������\n", count);
	system("pause");
	return 0;
}
