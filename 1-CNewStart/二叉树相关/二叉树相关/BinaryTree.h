#pragma once

struct BTreeNode
{
	int _val;
	struct BTreeNode* _left;
	struct BTreeNode* _right;
};


//������������
//ֻ��һ��˼·demo
int maxDepth(struct BTreeNode* root);

//��ͬ����
//bool isSameTree(struct BTreeNode* p, struct BTreeNode* q);

