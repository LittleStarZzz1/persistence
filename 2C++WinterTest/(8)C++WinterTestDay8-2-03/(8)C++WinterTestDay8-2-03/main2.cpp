#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
	int thirdMax(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		set<int> s;
		for (auto & i : nums)
		{
			s.insert(i);
			if (s.size() > 3)
			{
				s.erase(*s.begin());
			}
		}
		if (s.size() < 3)
		{
			return *s.rbegin();
		}
		else
		{
			return *s.begin();
		}
	}
};

int main()
{

	system("pause");
	return 0;
}