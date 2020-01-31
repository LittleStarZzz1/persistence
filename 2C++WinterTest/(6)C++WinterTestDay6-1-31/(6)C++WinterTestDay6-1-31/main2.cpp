#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//有序数组的平方
	
class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		int n = A.size();
		vector<int> res(n, 0);
		for (int i = 0; i < n; ++i)
		{
			res[i] = A[i] * A[i];
		}
		sort(res.begin(), res.end());
		return res;
	}
};

int main()
{


	system("pause");
	return 0;
}