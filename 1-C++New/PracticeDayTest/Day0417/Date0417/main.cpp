#include <iostream>

using namespace std;

//二叉树的镜像
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
	val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
	//递归解法
	void Mirror(TreeNode *pRoot) {
		//判空
		if (pRoot == nullptr)
			return;
		if (pRoot->left == nullptr && pRoot->right == nullptr)
			return;
		//交换当前节点的左右节点
		TreeNode* tmp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = tmp;
		//递归左子树
		Mirror(pRoot->left);
		//递归右子树
		Mirror(pRoot->right);
	}
};


int main()
{


	return 0;
}