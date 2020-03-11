#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

bool isSameTree(struct BTreeNode* p, struct BTreeNode* q){
	if (p == NULL && q == NULL)
	{
		return true;
	}
	if (p && q == NULL)
	{
		return false;
	}
	if (q && p == NULL)
	{
		return false;
	}
	if (p->_val == q->_val)
	{
		return isSameTree(p->_left, q->_left) && isSameTree(p->_right, q->_right);
	}
	return false;

}

int main()
{


	system("pause");
	return 0;
}