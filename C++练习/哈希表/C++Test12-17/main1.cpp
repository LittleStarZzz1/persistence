#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//�ظ�N�ε�Ԫ��
//�ڴ�СΪ 2N ������ A ���� N+1 ����ͬ��Ԫ��, ������һ��Ԫ���ظ��� N ��.
//�����ظ��� N �ε��Ǹ�Ԫ�ء�
class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		unordered_map<int, int> um;
		int n = A.size() / 2;

		for (auto & e : A)
		{
			um[e]++;
		}

		for (auto & e : um)
		{
			if (e.second == n)
			{
				return e.first;
			}
		}
		return -1;
	}
};

int main1()
{


	system("pause");
	return 0;
}