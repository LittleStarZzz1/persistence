#include <iostream>

using namespace std;


//变态青蛙跳台阶问题
class Solution
{
public:
	int JumpFloor(int number)
	{
		return pow(2, number - 1);
	}
};

int main()
{


	system("pause");
	return 0;
}