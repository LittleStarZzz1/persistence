#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
enum {
	EXIT,	//默认从0开始
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
	char name[NAME_SIZE];	//姓名
	char sex[SEX_SIZE];		//性别
	short int age;			//年龄
	char addr[ADDR_SIZE];	//家庭住址
	char telnum[TEL_SIZE];
}Student;
typedef struct MailList{
	Student data[MAX];
	int size;
}MailList;
//菜单函数
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
		printf("通讯录已满,不能插入!\n");
		return;
	}
	printf("请输入姓名,性别,年龄,家庭住址,电话:\n");
	scanf("%s", ml->data[ml->size].name);
	scanf("%s", ml->data[ml->size].sex);
	scanf("%d", &ml->data[ml->size].age);
	scanf("%s", ml->data[ml->size].addr);
	scanf("%s", ml->data[ml->size].telnum);
	++ml->size;
}
void ShowMailListInfor(MailList* ml){
	assert(ml);
	printf("%6s %5s %3s %10s %12s\n", "姓名", "性别", "年龄", "家庭住址",
		"电话");
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
		printf("请输入您想要实现的功能!\n");
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
				printf("退出!\n");
				break;
			default :
				printf("输入分支数据不存在!\n");
				break;
		}
	} while (input);
}

int main1(){
	test();
	system("pause");
	return 0;
}