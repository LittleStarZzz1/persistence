#include <iostream>
#include <vector>

using namespace std;

//��һ
class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int len = digits.size() - 1;
		for (int i = len; i >= 0; --i)
		{
			if (digits[i] == 9)
			{
				digits[i] = 0;
			}
			else
			{
				digits[i]++;
				return digits;
			}
		}
		digits.push_back(0);
		digits[0] = 1;
		return digits;
	}
};

int main()
{



	system("pause");
	return 0;
}