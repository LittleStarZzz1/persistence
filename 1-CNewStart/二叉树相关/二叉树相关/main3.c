#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

//·­×ª¶þ²æÊ÷
struct TreeNode* invertTree(struct BTreeNode* root){
	if (root == NULL)
	{
		return NULL;
	}

	struct TreeNode *tmp;
	tmp = root->_left;
	root->_left = root->_right;
	root->_right = tmp;

	invertTree(root->_left);
	invertTree(root->_right);

	return root;
}


int main()
{


	system("pause");
	return 0;
}