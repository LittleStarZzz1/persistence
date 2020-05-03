#include <iostream>
#include <string>
#include <vector>

using namespace std;

//�ҵ��ַ����е�һ��ֻ����һ�ε��ַ�
class Solution {
public:
	int firstUniqChar(string s) {
		int size = s.size();
		if (size == 0)
			return -1;
		vector<int> v(26, 0);
		for (int i = 0; i < size; ++i)
		{
			v[s[i] - 'a']++;
		}
		for (int i = 0; i < size; ++i)
		{
			if (v[s[i] - 'a'] == 1)
				return i;
		}
		return -1;
	}
};

int main()
{

	system("pause");
	return 0;
}