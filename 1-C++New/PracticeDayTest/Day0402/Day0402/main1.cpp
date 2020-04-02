#include <iostream>
#include <vector>

//���ݶ�������ǰ�����к����������ؽ�������
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
		//�����п�
		if (pre.size() == 0)
			return NULL;
		TreeNode* root = new TreeNode(pre[0]);
		//���ڵ����֮��, �������������ҵ����ڵ���±�, ȷ�����ڵ��������������
		int i;
		for (i = 0; i < vin.size() && vin[i] != pre[0]; ++i);
		//��forѭ������֮�����ҵ����ڵ������������е��±�
		vector<int> pre_left, in_left, pre_right, in_right;
		int pre_i = 1;//ÿ��ѭ��pre�����еĵ�һ��ֵ����
		//���±�Ϊ1��ֵ��ʼ���ָ��ڵ����������
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