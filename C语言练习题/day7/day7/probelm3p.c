#include <stdio.h>
#include <stdlib.h>

//�ӵڶ��ο�ʼ,��������ĸ߶�����һ�ε���ĸ߶���ͼ
//ͨ����˼·�򻯴���
int main(){
	double sum = 100, back = sum / 2;
	int i;
	for (i = 0; i < 9; ++i){
		sum += back * 2;
		back = back / 2;
	}
	printf("��10����ع�����%lf��,�����߶�Ϊ%lf��\n", sum, back);
	system("pause");
	return 0;
}