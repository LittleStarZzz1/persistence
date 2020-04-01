#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int>> array) 
	{
		int col = 0;
		int len = array[0].size();
		int row = array.size() - 1;
		while (array[row][col] != target && row >= 0 && col < len)
		{
			if (target < array[row][col])
			{
				//目标值小于当前值, 往上找
				row--;
			}
			else if (target > array[row][col])
			{
				//目标值大于当前值, 往右找
				col++;
			}
			else
			{
				return true;
			}
		}
		return false;
	}
};

int main()
{

	system("pause");
	return 0;
}