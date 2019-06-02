#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
enum {
	EXIT,	//Ĭ�ϴ�0��ʼ
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	SORT,
	EMPTY,
	SHOW
};
#define NAME_SIZE 30
#define SEX_SIZE 5
#define ADDR_SIZE 20
#define TEL_SIZE 12
#define MAX 3
typedef struct student{
	char name[NAME_SIZE];	//����
	char sex[SEX_SIZE];		//�Ա�
	short int age;			//����
	char addr[ADDR_SIZE];	//��ͥסַ
	char telnum[TEL_SIZE];
}Student;
typedef struct MailList{
	Student data[MAX];
	int size;
}MailList;
//�˵�����
void menu(){
	printf("*****************************************\n");
	printf("*******1. Add         2. Del     ********\n");
	printf("*******3. modify      4. search  ********\n");
	printf("*******5. Add         6. empty   ********\n");
	printf("*******7. show        0. exit    ********\n");
	printf("*****************************************\n");
	printf("*****************************************\n");
}
void InitMailList(MailList* ml){
	assert(ml);
	ml->size = 0;
	memset(ml->data, 0, MAX * sizeof(Student));
}
void AddMailListInfor(MailList* ml){
	assert(ml);
	if (ml->size >= MAX){
		printf("ͨѶ¼����,���ܲ���!\n");
		return;
	}
	printf("����������,�Ա�,����,��ͥסַ,�绰:\n");
	scanf("%s", ml->data[ml->size].name);
	scanf("%s", ml->data[ml->size].sex);
	scanf("%d", &ml->data[ml->size].age);
	scanf("%s", ml->data[ml->size].addr);
	scanf("%s", ml->data[ml->size].telnum);
	++ml->size;
}
void ShowMailListInfor(MailList* ml){
	assert(ml);
	printf("%6s %5s %3s %10s %12s\n", "����", "�Ա�", "����", "��ͥסַ",
		"�绰");
	int i;
	for (i = 0; i < ml->size; ++i){
		printf("%6s %5s %3d %10s %12s\n", ml->data[i].name,
			ml->data[i].sex, ml->data[i].age,
			ml->data[i].addr, ml->data[i].telnum);
	}
}
void test(){
	MailList ml;
	int input;
	InitMailList(&ml);
	do {
		menu();
		printf("����������Ҫʵ�ֵĹ���!\n");
		scanf("%d", &input);
		switch(input){
			case 1 : //Add
				AddMailListInfor(&ml);
				break;
			case 2 : //Del
				//DelMailListInfor(&ml);
				break;
			case 3 : //Modify
				//ModifyMailListInfor(&ml);
				break;
			case 4 : //Search
				//SearchMailListInfor(&ml);
				break;
			case 5 : //Sort
				//SortMailListInfor(&ml);
				break;
			case 6 : //empty
				//EmptyMailListInfor(&ml);
				break;
			case 7 : //Show
				ShowMailListInfor(&ml);
				break;
			case 0 :
				printf("�˳�!\n");
				break;
			default :
				printf("�����֧���ݲ�����!\n");
				break;
		}
	} while (input);
}

int main1(){
	test();
	system("pause");
	return 0;
}