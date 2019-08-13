#ifndef _MAILLIST_H
#define _MAILLIST_H

enum {
	ADD_MSG = 1,	//�����Ϣ
	DELETE_MSG,		//ɾ����Ϣ
	SEARCH_MSG,		//��ѯ��Ϣ
	CHANGE_MSG,		//�޸���Ϣ
	DISPLAY_MSG,	//��ʾ
	EMPTY_MSG,		//���
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

//�����ϵ����Ϣ
void inputData();

//��ʾ������ϵ����Ϣ
void outputData();



#endif //_MAILLIST_H





