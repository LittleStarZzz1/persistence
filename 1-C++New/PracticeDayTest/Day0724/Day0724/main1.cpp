#include <iostream>
#include <vector>

using namespace std;

//��������ʹ����λ������ǰ�벿��,ż��λ�������벿��
class Solution {
public:
	void reOrderArray(vector<int> &array) {
		if (array.size() == 0)
			return;
		//int k = 0;
		for (int i = 0; i < array.size(); ++i)
		{
			if (array[i] & 1)//������
			{
				int tmp = array[i];
				int j = i;
				while (j > 0 && ((array[j - 1] & 1) == 0))
				{
					array[j] = array[j - 1];
					--j;
				}
				array[j] = tmp;
			}
		}
	}
};

int main()
{


	return 0;
}