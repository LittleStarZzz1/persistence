#include <iostream>
#include <vector>

using namespace std;

//Ñî»ÔÈý½Ç
class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> ret;
		ret.resize(numRows);

		for (int i = 0; i < numRows; ++i)
		{
			ret[i].resize(i + 1);
			ret[i][0] = 1;
			ret[i][ret[i].size() - 1] = 1;
			for (size_t j = 1; j < ret[i].size() - 1; ++j)
			{
				ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
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