#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Menu(){
	printf("***********\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.�˳���Ϸ\n");
	printf("***********\n");
	printf("����������ѡ��: \n");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}
void Game(){
	int to_guess = rand() % 100 + 1;
	int num;
	while (1){
		printf("���һ������: \n");
		scanf("%d",&num);
		if (num < to_guess){
			printf("����\n");
		}
		else if (num > to_guess){
			printf("����\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}
int main1()
{
	srand((unsigned int)time(0));
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();
		}
		else if (choice == 2){
			printf("Goodebye!\n");
			break;
		}
		else {
			printf("������������!\n");
		}
	}
	system("pause");
	return 0;
}