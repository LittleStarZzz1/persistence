#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int j = 8;
	while (arr[i++] % 2 && i <= 8);	//����߿�ʼ����������
	while (arr[j--] % 2 == 0 && j >= 0);	//���ұ߿�ʼ������ż��
	while (i <= j){	//������ҵ������������ұ��ҵ�ż���ͽ���
		int tmp = arr[i - 1];	//����ѭ����i������֮���i,j���Լ�֮���j,���Խ�������i - 1��j + 1
		arr[i - 1] = arr[j + 1];
		arr[j + 1] = tmp;
		//����֮����������������,�ұ���ż��,����֮������ѭ��
		while (arr[i++] % 2 && i <= 8);
		while (arr[j--] % 2 == 0 && j >= 0);
	}
	for (i = 0; i < 9; ++i){
		printf("%d ",arr[i]);
	}
	system("pause");
	return 0;
}