#include <stdio.h>
#include <stdlib.h>

//���������ڵĵ�һ����ĸ���ж����������ڼ�
//�����һ����ĸһ��,������жϵڶ�����ĸ
int JudgeWeek(){
	char c;
	char d;
	printf("������һ����ĸ: ");
	scanf("%c", &c);
	switch (c){
	case 'm':
		return 1;
	case 't':
		while (1){
			printf("������ĸ��ͬ,��������һ����ĸ!\n");
			d = getch();
			if (d == 'u'){
				return 2;
			}
			else if (d == 'h'){
				return 4;
			}
			else {
				printf("����������������������!\n");
			}
		}
	case 'w':
		return 3;
	case 'f':
		return 5;
	case 's':
		while (1){
			printf("������ĸ��ͬ,��������һ����ĸ!\n");
			d = getch();
			if (d == 'a'){
				return 6;
			}
			else if (d == 'u'){
				return 7;
			}
			else {
				printf("����������������������!\n");
			}
		}
	default:
		return 0;
	}
}
int main1(){
	switch (JudgeWeek()){
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("������������!\n");
	}
	system("pause");
	return 0;
}