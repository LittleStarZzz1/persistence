#include <iostream>

using namespace std;


//��̬������̨������
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