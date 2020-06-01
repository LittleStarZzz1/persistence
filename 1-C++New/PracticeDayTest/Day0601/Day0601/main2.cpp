#include <iostream>
#include <vector>

using namespace std;

//杨辉三角

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> ret;
		ret.resize(numRows);//开空间

		for (int i = 0; i < numRows; ++i)
		{
			ret[i].resize(i + 1);//为每一个对应的vector<int>开辟空间
			ret[i][0] = 1;//左边界赋值为1
			ret[i][i] = 1;//右边界赋值为1
			for (int j = 1; j < i; ++j)
			{
				ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];//计算对应位置的值
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