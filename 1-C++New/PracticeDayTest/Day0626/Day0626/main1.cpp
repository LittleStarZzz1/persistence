#include <iostream>
#include <vector>

using namespace std;

//Î¢ÐÅºì°ü
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		int tmp = gifts[0];
		int count = 1;
		for (int i = 1; i < n - 1; ++i)
		{
			if (tmp == gifts[i])
				++count;
			else{
				--count;
				if (count == 0)
				{
					tmp = gifts[i + 1];
					count = 1;
				}
			}
		}
		count = 0;
		for (auto& i : gifts)
		{
			if (i == tmp)
				++count;
		}
		return count > n / 2 ? tmp : 0;
	}
};

int main()
{

	return 0;
}
