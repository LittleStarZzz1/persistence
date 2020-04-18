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
			//从左往右走
			for (int i = left; i <= right; ++i)
			{
				ret.push_back(matrix[up][i]);
			}
			++up;//上边界减1
			if (up > down)
				break;//判断是否越界, 防止同样的路走第二遍
			//从上往下走
			for (int i = up; i <= down; ++i)
			{
				ret.push_back(matrix[i][right]);
			}
			--right;//右边界减一
			if (left > right)
				break;
			//从右往左走
			for (int i = right; i >= left; --i)
			{
				ret.push_back(matrix[down][i]);
			}
			--down;//下边界减1
			if (up > down)
				break;
			//从下往上走
			for (int i = down; i >= up; --i)
			{
				ret.push_back(matrix[i][left]);
			}
			++left;//左边界减1
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