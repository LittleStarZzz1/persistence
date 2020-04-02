#include <iostream>
#include <vector>

//根据二叉树的前序序列和中序序列重建二叉树
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		//首先判空
		if (pre.size() == 0)
			return NULL;
		TreeNode* root = new TreeNode(pre[0]);
		//根节点给好之后, 在中序序列中找到根节点的下标, 确定根节点的左右子树序列
		int i;
		for (i = 0; i < vin.size() && vin[i] != pre[0]; ++i);
		//该for循环跳出之后则找到根节点在中序序列中的下标
		vector<int> pre_left, in_left, pre_right, in_right;
		int pre_i = 1;//每次循环pre序列中的第一个值做根
		//从下标为1的值开始区分根节点的左右子树
		for (int j = 0; j < vin.size(); ++j)
		{
			if (j < i)
			{
				in_left.push_back(vin[j]);
				pre_left.push_back(pre[pre_i]);
				pre_i++;
			}
			else if (j > i)
			{
				in_right.push_back(vin[j]);
				pre_right.push_back(pre[pre_i]);
				pre_i++;
			}
		}
		root->left = reConstructBinaryTree(pre_left, in_left);
		root->right = reConstructBinaryTree(pre_right, in_right);
		return root;
	}
};

int main()
{
	vector<int> pre = { 1, 2, 4, 7, 3, 5, 6, 8 };
	vector<int> in = { 4, 7, 2, 1, 5, 3, 6, 8 };
	Solution s;
	TreeNode* root = s.reConstructBinaryTree(pre, in);

	system("pause");
	return 0;


}