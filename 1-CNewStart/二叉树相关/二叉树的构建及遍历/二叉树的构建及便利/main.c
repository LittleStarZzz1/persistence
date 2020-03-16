#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "BinaryTree.h"

//����ǰ����������
BTNode* rebuildBTree(DataType* a, int* pi)
{
	if (a[*pi] == '#')
	{
		return NULL;
	}

	else
	{
		BTNode* root = (BTNode*)malloc(sizeof(BTNode*));
		root->_val = a[*pi];
		
		(*pi)++;
		root->_left = rebuildBTree(a, pi);
		
		(*pi)++;
		root->_right = rebuildBTree(a, pi);
	
		return root;
	}

}

//�������
void Inorder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	Inorder(root->_left);
	printf("%c ", root->_val);
	Inorder(root->_right);
}



int main()
{
	DataType a[100];
	scanf("%s", a);
	int pi = 0;

	BTNode* root = rebuildBTree(a, &pi);

	Inorder(root);

	system("pause");
	return 0;
}