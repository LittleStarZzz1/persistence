#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool isLongPressedName(string name, string typed) {
		int n = typed.size();
		int len = name.size();
		int j = 0;
		for (int i = 0; i < n; ++i)
		{
			if (typed[i] == name[j] && j < len)
			{
				j++;
				continue;
			}
			else if (j > 0 && typed[i] == name[j - 1])
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		if (j == len)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
};

int main()
{


	system("pause");
	return 0;
}