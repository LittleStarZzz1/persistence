#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//动态规划问题,年终奖
class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		// write code here
		int row = board.size();
		int col = board[0].size();
		//先对二维数组进行初始化,第一行第一列进行初始化
		//第一行的福利价值更新只能来自左边,向右和向下的路线选择决定了他只能是来自左边
		for (int i = 1; i < row; ++i)
		{
			board[i][0] += board[i - 1][0];//第一列
		}
		//第一行的福利价值更新只能来自上边,向右和向下的路线选择决定了他只能是来自上边
		for (int j = 1; j < col; ++j)
		{
			board[0][j] += board[0][j - 1];//第一行
		}
		for (int i = 1; i < row; ++i)
		{
			for (int j = 1; j < col; ++j)
			{
				board[i][j] = max(board[i][j - 1], board[i - 1][j]) + board[i][j];
			}
		}
		return board[row - 1][col - 1];
	}
};

int main()
{


	return 0;
}