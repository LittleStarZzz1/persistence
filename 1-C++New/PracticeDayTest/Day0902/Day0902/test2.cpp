#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	*
	* @param person int整型一维数组
	* @param personLen int person数组长度
	* @return int整型
	*/
	int house(int* person, int personLen) {
		// write code here
		vector<int> ret(personLen, 1);

		for (int i = 1; i < personLen; ++i)
		{
			if (person[i] > person[i - 1])
				ret[i] = ret[i - 1] + 1;
			else if (person[i] < person[i - 1])
				ret[i - 1] = ret[i] + 1;
		}
		int sum = 0;
		for (int i = 0; i < personLen; ++i)
		{
			sum += ret[i];
		}

		return sum;
	}
};

int main2()
{
	Solution s;

	//int person[5] = {4,1,3,3,3};
	int person[5] = { 3,2,4 };
	int n = 3;
	cout << s.house(person, 3) << endl;

	system("pause");
	return 0;
}