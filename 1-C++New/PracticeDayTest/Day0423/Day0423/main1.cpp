#include <iostream>

using namespace std;

class Sum
{
public:
	Sum()
	{
		ret += i;
		++i;
	}
	static void Init()
	{
		i = 1;
		ret = 0;
	}
	static int retval()
	{
		return ret;
	}

private:
	static int i;
	static int ret;
};
int Sum::i = 1;
int Sum::ret = 0;
class Solution {
public:
	int Sum_Solution(int n) {
		Sum::Init();
		Sum* pS = new Sum[n];
		return Sum::retval();
	}


};

int main()
{



	system("pause");
	return 0;
}