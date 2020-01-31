#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	string reverseOnlyLetters(string S) {
		int len = S.size();
		int j = 0;
		string res(S);
		vector<char> tmp;
		for (int i = len - 1; i >= 0; --i)
		{
			if ((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z'))
			{
				tmp.push_back(S[i]);
			}
		}
		for (int i = 0; i < len; ++i)
		{
			if ((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z'))
			{
				res[i] = tmp[j];
				j++;
			}
		}
		return res;
	}
};

int main()
{


	system("pause");
	return 0;
}