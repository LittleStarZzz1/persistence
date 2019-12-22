#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
	int backPackII(int m, vector<int> &A, vector<int> &V) {
		// write your code here
		int n = m + 1;
		int len = A.size();

		vector<int> v(n, 0);

		for (int i = 0; i < len; ++i)
		{
			for (int j = n - 1; j >= 0; --j)
			{
				if (A[i] > j)
				{
					v[j] = v[j];
				}
				else
				{
					v[j] = max(v[j], v[j - A[i]] + V[i]);

				}
			}
		}
		return v[n - 1];
	}
};


int main()
{


	system("pause");
	return 0;
}