#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main2(){
	//��ʮ�����������ֵ
	//���ַ�����Ϊ����,��Ҫ�ظ�����.˼·�������������ҵ��ϴ����һ��,Ȼ��������һ����
	//�����Ľ��бȽ�,ֻҪ�����Ĵ���������滻.
	//���ַ���Ҳ��������ʮ�����������ֵ�ʹδ�ֵ
	int max, next;
	int tmp;
	printf("������������:  \n");
	scanf("%d %d", &max, &next);
	if (max < next){
		tmp = max;
		max = next;
		next = tmp;
	}
	for (int i = 0; i < 8; ++i){
		int last;
		printf("��������һ����: \n");
		scanf("%d",&last);
		if (last > max){
			next = max;
			max = last;
		}
		else if (last > next){
			next = last;
		}
	}
	printf("��ʮ������������%d,�δ���%d",max,next);
	system("pause");
	return 0;
}