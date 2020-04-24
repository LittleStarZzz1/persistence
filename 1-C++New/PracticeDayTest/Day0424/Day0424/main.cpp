#include <iostream>
#include <vector>

using namespace std;

//根据二叉树的前序遍历和中序遍历重建二叉树

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		if (preorder.empty())
		{
			return nullptr;
		}
		int pre_i = 1, in_i = 0;
		TreeNode* root = new TreeNode(preorder[0]);
		vector<int> in_left, in_right;
		vector<int> pre_left, pre_right;
		while (in_i < inorder.size()
			&& inorder[in_i] != preorder[0])
		{
			in_left.push_back(inorder[in_i++]);
			pre_left.push_back(preorder[pre_i++]);
		}
		++in_i;
		while (in_i < inorder.size()
			&& inorder[in_i] != preorder[0])
		{
			in_right.push_back(inorder[in_i++]);
			pre_right.push_back(preorder[pre_i++]);
		}
		root->left = buildTree(pre_left, in_left);
		root->right = buildTree(pre_right, in_right);
		return root;
	}
};

int main()
{


	system("pause");
	return 0;
}