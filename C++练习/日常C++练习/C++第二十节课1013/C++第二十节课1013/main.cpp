#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//C++实现二叉树中序遍历

struct TreeNode{
	int val;
	TreeNode * left;
	TreeNode * right;
	TreeNode(int x) :
		val(x),
		left(NULL),
		right(NULL){

	}
};

vector<int> inorderTraversal(TreeNode* root) {
	vector<int> res;

	stack<TreeNode *> m_s;
	TreeNode * cur = root;

	while (cur || !m_s.empty())
	{
		for (; cur; cur = cur->left)
		{
			m_s.push(cur);
		}
		cur = m_s.top();

		if (cur)
		{
			res.push_back(cur->val);
			cout << cur->val << ' ';
			m_s.pop();
			cur = cur->right;
		}
	}
	return res;
}

int main()
{
	TreeNode * root = new TreeNode(1);
	TreeNode * tmpr = new TreeNode(2);
	root->right = tmpr;

	TreeNode * tmprl = new TreeNode(3);
	tmpr->left = tmprl;

	//vector<int>::iterator it;
	//vector<int> vc = inorderTraversal(root);
	//for (auto & i : vc)
	//{
	//	cout << i << ' ';
	//}
	//cout << endl;
	inorderTraversal(root);


	system("pause");
	return 0;
}