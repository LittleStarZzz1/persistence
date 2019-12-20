#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

	int backPackII(int m, vector<int> &A, vector<int> &V) {
		// write your code here
		int col = m + 1;
		int row = V.size() + 1;

		vector<vector<int>> v(row);
		for (auto & e : v)
		{
			e.resize(col, 0);
		}

		for (int i = 1; i < row; ++i)
		{
			for (int j = 1; j < col; ++j)
			{
				if (A[i - 1] > j)
				{
					v[i][j] = v[i - 1][j];
				}
				else
				{
					v[i][j] = max(v[i - 1][j], v[i - 1][j - A[i - 1]] + V[i - 1]);

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