#pragma once

struct BTreeNode
{
	int _val;
	struct BTreeNode* _left;
	struct BTreeNode* _right;
};


//二叉树最大深度
//只是一个思路demo
int maxDepth(struct BTreeNode* root);

//相同的树
//bool isSameTree(struct BTreeNode* p, struct BTreeNode* q);

