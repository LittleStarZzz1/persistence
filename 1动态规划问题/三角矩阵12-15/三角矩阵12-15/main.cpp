#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//三角矩阵求顶部到底部的最小路径和
class Solution
{
public:
#if 1
	int minimumTotal(vector<vector<int> > &triangle)
	{
		vector<vector<int>> v(triangle);
		int row = triangle.size();
		int minPath;
		for (int i = 1; i < row; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				if (j == 0)
				{
					v[i][j] += v[i - 1][j];
				}
				else if (j == i)
				{
					v[i][j] += v[i - 1][j - 1];
				}
				else
				{
					v[i][j] += min(v[i - 1][j], v[i - 1][j - 1]);
				}
				//v[i][j] += triangle[i][j];
			}
		}
		minPath = v[row - 1][0];
		for (int i = 0; i < row; ++i)
		{
			minPath = min(minPath, v[row - 1][i]);
		}
		return minPath;
	}
#elif 0
	int minimumTotal(vector<vector<int> > &triangle) {
		vector<vector<int>> minPath(triangle);
		int row = triangle.size();
		for (int i = row - 2; i >= 0; --i)
		{
			for (int j = 0; j <= i; ++j)
			{
				minPath[i][j] =
					min(minPath[i + 1][j], minPath[i + 1][j + 1])
					+ minPath[i][j];
			}
		}
		return minPath[0][0];
	}
#endif
};

int main()
{


	system("pause");
	return 0;
}