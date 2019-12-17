#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int minPathSum(vector<vector<int> > &grid) {
		int row = grid.size();
		int col = grid[0].size();

		for (int i = 1; i < col; ++i)
		{
			grid[0][i] += grid[0][i - 1];
		}
		for (int j = 1; j < row; ++j)
		{
			grid[j][0] += grid[j - 1][0];
		}
		for (int i = 1; i < row; ++i)
		{
			for (int j = 1; j < col; ++j)
			{
				grid[i][j] = min(grid[i][j - 1], grid[i - 1][j]) + grid[i][j];
			}
		}
		return grid[row - 1][col - 1];
	}
};

int main()
{


	system("pause");
	return 0;
}