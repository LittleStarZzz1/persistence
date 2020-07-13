#include <iostream>
#include <string>

using namespace std;

//数据库连接池
int main()
{
	int n;
	while (cin >> n)
	{
		int maxConnection = 1;//表示最多需要创建的连接数
		int useConnection = 1;//表示可用连接数
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