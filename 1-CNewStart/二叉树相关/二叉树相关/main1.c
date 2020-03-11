#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"



//二叉树最大深度
//只是一个思路demo
int maxDepth(struct BTreeNode* root){
	if (root == NULL)
	{
		return 0;
	}

	int left_len = maxDepth(root->_left);
	int right_len = maxDepth(root->_right);

	return 1 + (left_len > right_len ? left_len : right_len);
}

int main1()
{


	system("pause");
	return 0;
}