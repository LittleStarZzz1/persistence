#include <iostream>
#include <vector>

using namespace std;

//�������

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> ret;
		ret.resize(numRows);//���ռ�

		for (int i = 0; i < numRows; ++i)
		{
			ret[i].resize(i + 1);//Ϊÿһ����Ӧ��vector<int>���ٿռ�
			ret[i][0] = 1;//��߽縳ֵΪ1
			ret[i][i] = 1;//�ұ߽縳ֵΪ1
			for (int j = 1; j < i; ++j)
			{
				ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];//�����Ӧλ�õ�ֵ
			}
		}

		return ret;
	}
};

int main()
{


	system("pause");
	return 0;
}