#include <stdio.h>
#include <stdlib.h>

//һ�����100�׵ĸ߶���������,ÿ����غ󷴵���ԭ�߶ȵ�һ��,������
//������10�����ʱ,������������?��10�η������
int main3(){
	double sum = 0;
	double tall = 100;
	double tmp;
	double back;
	int n = 10;
	tmp = tall;
	while (n){
		sum += tmp;
		back = tall * 0.5;
		tall = back;
		tmp = back * 2;
		--n;
	}
	printf("��10����ع�����%lf��,�����߶�Ϊ%lf��\n", sum, back);
	system("pause");
	return 0;
}