#ifndef _MAILLIST_H
#define _MAILLIST_H

enum {
	ADD_MSG = 1,	//添加信息
	DELETE_MSG,		//删除信息
	SEARCH_MSG,		//查询信息
	CHANGE_MSG,		//修改信息
	DISPLAY_MSG,	//显示
	EMPTY_MSG,		//清空
};

struct MailList{
	char name[20];
	char gender;
	char telnum[30];
	char addr[200];
	int age;
};

extern struct MailList g_allMsg[1000];
extern int g_count;

//添加联系人信息
void inputData();

//显示所有联系人信息
void outputData();



#endif //_MAILLIST_H





