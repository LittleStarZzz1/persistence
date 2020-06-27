#include <iostream>
#include <vector>

using namespace std;

//递归回溯典型问题,迷宫问题
//方便递归,写为全局变量
int _row, _col;//分别表示行列
vector<pair<int, int>> path_tmp;//用来保存当前路径
vector<pair<int, int>> path_best;//用来保存最优路径
vector<vector<int>> maze;//迷宫

void _findBestPath(int row, int col)
{
	path_tmp.push_back(pair<int, int>(row, col));
	maze[row][col] = 1;//表示当前方格已经走过了,不能再走了
	if (row == _row - 1 && col == _col - 1)
	{
		if (path_best.empty() || path_tmp.size() < path_best.size())
			path_best = path_tmp;
	}
	if (row - 1 >= 0 && maze[row - 1][col] == 0)
		_findBestPath(row - 1, col);//可以向上走
	if (row + 1 < _row && maze[row + 1][col] == 0)
		_findBestPath(row + 1, col);//可以向下走
	if (col + 1 < _col && maze[row][col + 1] == 0)
		_findBestPath(row, col + 1);//可以向右走
	if (col - 1 >= 0 && maze[row][col - 1] == 0)
		_findBestPath(row, col - 1);//可以向左走
	maze[row][col] = 0;//回溯
	path_tmp.pop_back();
}

int main()
{
	while (cin >> _row >> _col)
	{
		maze = vector<vector<int>>(_row, vector<int>(_col, 0));
		path_tmp.clear();
		path_best.clear();
		for (int i = 0; i < _row; ++i)
		{
			for (int j = 0; j < _col; ++j)
			{
				cin >> maze[i][j];
			}
		}
		_findBestPath(0, 0);
		for (auto& p : path_best)
		{
			cout << "(" << p.first << ',' << p.second << ")" << endl;
		}

	}
	return 0;
}