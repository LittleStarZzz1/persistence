#include <iostream>
#include "BinaryTree.h"

//¶Ô³Æ¶þ²æÊ÷
bool _cmpTree(struct BTreeNode *p, struct BTreeNode *q)
{
	if (p == NULL && q == NULL)
	{
		return true;
	}
	if (p == NULL || q == NULL)
	{
		return false;
	}
	if (p->_val != q->_val)
	{
		return false;
	}
	return _cmpTree(p->_left, q->_right) && _cmpTree(p->_right, q->_left);
}


bool isSymmetric(struct BTreeNode* root){
	if (root == NULL)
	{
		return true;
	}
	return _cmpTree(root->_left, root->_right);

}

int main()
{


	system("pause");
	return 0;
}


