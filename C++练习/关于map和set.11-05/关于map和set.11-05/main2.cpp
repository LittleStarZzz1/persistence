#include <iostream>
#include <set>

using namespace std;

//��n��ʯ�ӣ�ÿ��ȡ�����Ѻϳ�һ�ѣ�ÿ��ʯ�ӵĸ�����Ϊ�ϲ�ʯ������Ҫ�ķѵ�����������ϲ�����ʯ�Ӷ�����Ҫ�ķѵ���С����
//���͵�̰���⣬��ÿ��ȡ���������ٵ�����ʯ�Ӻϲ�.

int main2()
{
	int n;
	cin >> n; //ʯ�ӵĶ���

	multiset<int> data; //�ϲ�ʯ�Ӻ�ʯ�Ӹ������ܻ��ԭ�е�ĳ��ʯ�Ӹ�����ͬ������ѡ�� multiset(set���Զ�ȥ��)
	multiset<int>::iterator is;

	int tmp;
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		data.insert(tmp);
	}

	while (data.size() > 1)
	{
		tmp = 0;
		is = data.begin();
		tmp += *is;
		data.erase(is);
		

		is = data.begin();
		tmp += *is;
		data.erase(is);

		data.insert(tmp);

		sum += tmp;
	}

	cout << sum << endl;

	system("pause");
	return 0;
}