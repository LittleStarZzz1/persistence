#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(nullptr), right(nullptr) {
	}
};
//判断二叉树的子结构
class Solution {
public:
	bool _HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot2 == nullptr)
			return true;
		if (pRoot1 == nullptr)
			return false;
		if (pRoot1->val != pRoot2->val)
			return false;
		return _HasSubtree(pRoot1->left, pRoot2->left) &&
			_HasSubtree(pRoot1->right, pRoot2->right);
	}
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 == nullptr || pRoot2 == nullptr)
			return false;
		bool res = false;
		if (pRoot1->val == pRoot2->val)
			res = _HasSubtree(pRoot1, pRoot2);
		if (!res)
			res = HasSubtree(pRoot1->left, pRoot2) ||
			HasSubtree(pRoot1->right, pRoot2);

		return res;
	}
};