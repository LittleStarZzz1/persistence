#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int Fibonacci(int n) {
		if (n == 0)
			return 0;
		//if (n == 1 || n == 2)
		//  return 1;
		//return Fibonacci(n - 1) + Fibonacci(n - 2);
		if (n == 1 || n == 2)
			return 1;
		int a_1, a_2;
		if (_m.find(n - 2) == _m.end())
		{
			//没找到递归进行计算, 并将结果插入_m
			a_1 = Fibonacci(n - 2);
			_m.insert(make_pair(n - 2, a_1));
		}
		else
		{
			//找到了直接拿来用
			a_1 = _m[n - 2];
		}

		if (_m.find(n - 1) == _m.end())
		{
			a_2 = Fibonacci(n - 1);
			_m.insert(make_pair(n - 1, a_2));
		}
		else
		{
			a_2 = _m[n - 1];
		}
		return a_1 + a_2;
	}
private:
	unordered_map<int, int> _m;
};

int main()
{


	return 0;
}