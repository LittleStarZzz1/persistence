#include <iostream>

using namespace std;

//�������ľ���
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
	//�ݹ�ⷨ
	void Mirror(TreeNode *pRoot) {
		//�п�
		if (pRoot == nullptr)
			return;
		if (pRoot->left == nullptr && pRoot->right == nullptr)
			return;
		//������ǰ�ڵ�����ҽڵ�
		TreeNode* tmp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = tmp;
		//�ݹ�������
		Mirror(pRoot->left);
		//�ݹ�������
		Mirror(pRoot->right);
	}
};


int main()
{


	return 0;
}