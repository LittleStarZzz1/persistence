#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
		if (matrix.empty())
		{
			return false;
		}
		int row = matrix.size();
		int col = matrix[0].size();
		int i = row - 1, j = 0;
		while (i >= 0 && j < col)
		{
			if (target < matrix[i][j])
				i--;
			else if (target > matrix[i][j])
				++j;
			else
				return true;
		}
		return false;
	}
};

int main()
{


	return 0;
}