#include <iostream>
#include <vector>

using namespace std;

//���ʼ�
int main()
{
	int n;
	vector<long long> v(21, 0);
	v[1] = 0;
	v[2] = 1;
	//v[i]��ʾi���˱����λ�ò�ƥ������
	//���ȵ�һ�����õ��������Լ��ʼ������Ϊ i - 1;
	//����һ����ڶ�����ǡ�û����õ��Է��ʼ�ʱ��ת��Ϊv[i - 2]�������⣬(i - 1)*v[i - 2]
	//���ڶ�����û��ǡ���õ���һ���˵��ʼ����ͱ�Ϊ(i - 1) * v[i - 1]
	for (int i = 3; i < 21; ++i)
		v[i] = (i - 1) * (v[i - 1] + v[i - 2]);
	while (cin >> n)
	{
		cout << v[n] << endl;
	}

	return 0;
}