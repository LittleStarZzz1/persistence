#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
		int row = obstacleGrid.size();
		int col = obstacleGrid[0].size();
		vector<vector<int>> v(row, vector<int>(col, 0));

		for (int i = 0; i < col; ++i)
		{
			if (obstacleGrid[0][i] == 1)
			{
				break;
			}
			else
			{
				v[0][i] = 1;
			}
		}
		for (int j = 0; j < row; ++j)
		{
			if (obstacleGrid[j][0] == 1)
			{
				break;
			}
			else
			{
				v[j][0] = 1;
			}
		}
		for (int i = 1; i < row; ++i)
		{
			for (int j = 1; j < col; ++j)
			{
				if (obstacleGrid[i][j] == 1)
				{
					v[i][j] = 0;
				}
				else
				{
					v[i][j] = v[i - 1][j] + v[i][j - 1];
				}
			}
		}
		return v[row - 1][col - 1];
	}
};

int main()
{


	system("pause");
	return 0;
}