#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

//�����˵��˶���Χ
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

		queue<pair<int, int>> q;//�����洢��ǰ���������ڷ���λ�õĶ���
		vector<vector<int>> v(m, vector<int>(n, 0));//m��n�еķ���

		int count = 1;//

		int dx[2] = { 0, 1 };//���������н�������
		int dy[2] = { 1, 0 };//���������н�������

		v[0][0] = 1;
		q.push(make_pair(0, 0));//���Ȳ���(0,0)��ֵ�Ա�ʾ��ʼλ��(0,0)

		while (!q.empty())
		{
			int x = q.front().first;//��һ��ѭ�����[0, 0]��ʼ
			int y = q.front().second;
			q.pop();

			for (int i = 0; i < 2; ++i)
			{
				//i=0ʱ,dx[0]=0,dy[0]=1,�����겻��,������+1,��ʾ������
				//i=1ʱ,dx[0]=1,dy[0]=0,������+1,�����겻��,��ʾ������
				int x1 = dx[i] + x;
				int x2 = dy[i] + y;

				if (x1 < 0 || x1 >= m || x2 < 0 || x2 >= n
					|| v[x1][x2] || getDigit(x1) + getDigit(x2) > k)
					//��������Խ��
					//����������λ֮�ʹ���k
					//��ǰ����λ���Ѿ������,�����Ѿ���1, continue��������ѭ��
					continue;

				v[x1][x2] = 1;//�Ѿ��߹���λ�ü�Ϊ1
				q.push(make_pair(x1, x2));//��ǰ����������λ�ô���queue
				count++;//�÷�����Ե���, ������1

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