#include <iostream>
#include <vector>

using namespace std;

//�ݹ���ݵ�������,�Թ�����
//����ݹ�,дΪȫ�ֱ���
int _row, _col;//�ֱ��ʾ����
vector<pair<int, int>> path_tmp;//�������浱ǰ·��
vector<pair<int, int>> path_best;//������������·��
vector<vector<int>> maze;//�Թ�

void _findBestPath(int row, int col)
{
	path_tmp.push_back(pair<int, int>(row, col));
	maze[row][col] = 1;//��ʾ��ǰ�����Ѿ��߹���,����������
	if (row == _row - 1 && col == _col - 1)
	{
		if (path_best.empty() || path_tmp.size() < path_best.size())
			path_best = path_tmp;
	}
	if (row - 1 >= 0 && maze[row - 1][col] == 0)
		_findBestPath(row - 1, col);//����������
	if (row + 1 < _row && maze[row + 1][col] == 0)
		_findBestPath(row + 1, col);//����������
	if (col + 1 < _col && maze[row][col + 1] == 0)
		_findBestPath(row, col + 1);//����������
	if (col - 1 >= 0 && maze[row][col - 1] == 0)
		_findBestPath(row, col - 1);//����������
	maze[row][col] = 0;//����
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