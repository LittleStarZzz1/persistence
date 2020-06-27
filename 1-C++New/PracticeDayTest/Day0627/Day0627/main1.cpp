#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//��̬�滮����,���ս�
class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		// write code here
		int row = board.size();
		int col = board[0].size();
		//�ȶԶ�ά������г�ʼ��,��һ�е�һ�н��г�ʼ��
		//��һ�еĸ�����ֵ����ֻ���������,���Һ����µ�·��ѡ���������ֻ�����������
		for (int i = 1; i < row; ++i)
		{
			board[i][0] += board[i - 1][0];//��һ��
		}
		//��һ�еĸ�����ֵ����ֻ�������ϱ�,���Һ����µ�·��ѡ���������ֻ���������ϱ�
		for (int j = 1; j < col; ++j)
		{
			board[0][j] += board[0][j - 1];//��һ��
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