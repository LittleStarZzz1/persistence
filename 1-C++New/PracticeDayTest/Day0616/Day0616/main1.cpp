#include <iostream>
#include <vector>

using namespace std;

//��������������
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		vector<int> v;
		v.resize(n + 1);//�࿪��һ���ռ��ֹ����Խ��
		v[n] = 0;
		for (int i = 0; i < n; ++i)//����������Ȼ��n��
		{
			cin >> v[i];
		}

		for (int i = 0; i < n; ++i)
		{
			if (v[i] < v[i + 1])//����ǵݼ����е��ж�
			{
				while (i < n && v[i] <= v[i + 1])
					++i;
				++count;
			}
			else if (v[i] == v[i + 1])
				continue;
			else //����ǵ��������ж�, �� v[i] > v[i + 1]
			{
				while (i < n && v[i] > v[i + 1])
					++i;
				++count;
			}
		}
		cout << count << endl;
	}
	return 0;
}