#include <iostream>
#include <vector>
#include <algorithm>

//·´×ª×Ö·û´®
class Solution {
public:
	void reverseString(std::vector<char>& s) {
		int size = s.size();
		if (size == 0)
		{
			return;
		}
		int left = 0;
		int right = size - 1;
		while (left < right)
		{
			std::swap(s[left], s[right]);
			++left;
			--right;
		}
	}
};

int main()
{


	system("pause");
	return 0;
}