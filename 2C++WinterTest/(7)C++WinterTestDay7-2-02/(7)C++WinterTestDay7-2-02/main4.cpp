#include <iostream>
#include <vector>

using namespace std;

//按奇偶排列数组
class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {
		vector<int> num1;
		vector<int> num2;
		for (auto & i : A)
		{
			if (i % 2 == 0)
			{
				num1.push_back(i);
			}
			else
			{
				num2.push_back(i);
			}
		}
		num1.insert(num1.end(), num2.begin(), num2.end());
		return num1;
	}
};

int main4()
{



	system("pause");
	return 0;
}