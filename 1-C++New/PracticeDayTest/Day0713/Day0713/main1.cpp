#include <iostream>
#include <string>

using namespace std;

//���ݿ����ӳ�
int main()
{
	int n;
	while (cin >> n)
	{
		int maxConnection = 1;//��ʾ�����Ҫ������������
		int useConnection = 1;//��ʾ����������
		string id, method;
		for (int i = 0; i < n; ++i)
		{
			cin >> id >> method;
			if (method == "connect")
			{
				if (useConnection == 0)
				{
					maxConnection++;
					useConnection++;
				}
				useConnection--;
			}
			else if (method == "disconnect" && useConnection < maxConnection)
			{
				useConnection++;
			}
		}
		cout << maxConnection << endl;
	}

	return 0;
}