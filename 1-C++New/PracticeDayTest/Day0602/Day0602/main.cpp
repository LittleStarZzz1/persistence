#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

//机器人的运动范围
class Solution {
public:
	int getDigit(int n)
	{
		int ret = 0;
		while (n > 0)
		{
			ret += n % 10;
			n /= 10;
		}
		return ret;
	}

	int movingCount(int m, int n, int k) {
		if (k == 0)
			return 1;

		queue<pair<int, int>> q;//用来存储当前机器人所在方格位置的队列
		vector<vector<int>> v(m, vector<int>(n, 0));//m行n列的方格

		int count = 1;//

		int dx[2] = { 0, 1 };//定义向右行进的数组
		int dy[2] = { 1, 0 };//定义向下行进的数组

		v[0][0] = 1;
		q.push(make_pair(0, 0));//首先插入(0,0)键值对表示初始位置(0,0)

		while (!q.empty())
		{
			int x = q.front().first;//第一次循环会从[0, 0]开始
			int y = q.front().second;
			q.pop();

			for (int i = 0; i < 2; ++i)
			{
				//i=0时,dx[0]=0,dy[0]=1,横坐标不变,纵坐标+1,表示向下走
				//i=1时,dx[0]=1,dy[0]=0,横坐标+1,纵坐标不变,表示向右走
				int x1 = dx[i] + x;
				int x2 = dy[i] + y;

				if (x1 < 0 || x1 >= m || x2 < 0 || x2 >= n
					|| v[x1][x2] || getDigit(x1) + getDigit(x2) > k)
					//所处坐标越界
					//行列坐标数位之和大于k
					//当前方格位置已经到达过,计数已经加1, continue跳过本次循环
					continue;

				v[x1][x2] = 1;//已经走过的位置记为1
				q.push(make_pair(x1, x2));//当前机器人所处位置存入queue
				count++;//该方格可以到达, 计数加1

			}
		}
		return count;
	}
};

int main()
{


	system("pause");
	return 0;
}