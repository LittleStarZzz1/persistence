#include <stdio.h>
#include <stdlib.h>

//һ��5λ�����ж����ǲ��ǻ�����
//����12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
int JudgeNumber(int n){
	int i;
	int sum = 0;
	int tmp;
	for (i = n; i; i = i / 10){
		tmp = i % 10;
		sum = sum * 10 + tmp;
	}
	if (sum == n){
		return 1;
	}
	return 0;
}
int main(){
	if (JudgeNumber(12321)){
		printf("�������ǻ�����!\n");
	}
	else {
		printf("�����ֲ��ǻ�����!\n");
	}
	system("pause");
	return 0;
}