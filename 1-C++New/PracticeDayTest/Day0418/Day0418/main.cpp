#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<int> printMatrix(vector<vector<int>> matrix) {
		vector<int> ret;
		int left = 0;
		int right = matrix[0].size() - 1;
		int up = 0;
		int down = matrix.size() - 1;
		int i = 0;
		while (1)
		{
			//����������
			for (int i = left; i <= right; ++i)
			{
				ret.push_back(matrix[up][i]);
			}
			++up;//�ϱ߽��1
			if (up > down)
				break;//�ж��Ƿ�Խ��, ��ֹͬ����·�ߵڶ���
			//����������
			for (int i = up; i <= down; ++i)
			{
				ret.push_back(matrix[i][right]);
			}
			--right;//�ұ߽��һ
			if (left > right)
				break;
			//����������
			for (int i = right; i >= left; --i)
			{
				ret.push_back(matrix[down][i]);
			}
			--down;//�±߽��1
			if (up > down)
				break;
			//����������
			for (int i = down; i >= up; --i)
			{
				ret.push_back(matrix[i][left]);
			}
			++left;//��߽��1
			if (left > right)
				break;
		}
		return ret;
	}
};


int main()
{

	return 0;
}