#include <stdio.h>
#include <stdlib.h>

//���ӳ�������:���ӵ�һ��ժ�����ɸ�����,���ϳ���һ��,û�гԱ�,�ֶ����һ��
//�ڶ��콫ʣ�����ӵ�һ��Ե��ֶ����һ��
//�Ժ�ÿ����Ӷ����ǰһ��ʣ�µ����ӵ�һ���ٶ�һ��
//���˵�ʮ����ӷ���ֻʣ��һ����
//�ʺ���һ��ʼһ��ժ�˶��ٸ�����
#if 0
int test(){
	int day = 9;
	int x1 = 1;
	int x2 = 1;
	while (day > 0){
		x1 = (x2 + 1) * 2;
		x2 = x1;
		--day;
	}
	return x1;
}
#endif

int main1(){
	int n = 10;
	int last = 1;
	int sum = 0;
	while (n - 1){
		sum = (last + 1) * 2;
		last = sum;
		--n;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}