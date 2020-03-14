#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

//查找二叉树中方值为x的节点并返回
struct BTreeNode* TreeFind(struct BTreeNode* root, int x)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->_val == x)
	{
		return root;
	}
	
	struct BTreeNode* ret;
	
	ret = TreeFind(root->_left, x);
	if (ret)
	{
		return ret;
	}

	ret = TreeFind(root->_right, x);

	if (ret)
	{
		return ret;
	}

	return NULL;

}
int main()
{


	system("pause");
	return 0;
}


