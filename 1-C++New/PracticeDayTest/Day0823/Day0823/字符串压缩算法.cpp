#include <iostream>
#include <string>
#include <stack>

using namespace std;

//�ַ���ѹ���㷨
int main()
{
	string str;
	while (cin >> str)
	{
		stack<int> s;
		for (size_t i = 0; i < str.size(); ++i)
		{
			if (str[i] == '[')
				s.push(i);
			if (str[i] == '|')
				s.push(i);

			if (str[i] == ']')
			{
				//��ʼ��ջ
				int right = i;
				int mid = s.top();
				s.pop();
				int left = s.top();
				s.pop();

				int count = stoi(str.substr(left + 1, mid - left));
				string s = str.substr(mid + 1, right - mid - 1);
				string tmp;
				for (int j = 0; j < count; ++j)
				{
					tmp += s;
				}

				str = str.replace(left, right - left + 1, tmp);

				//������µ�i��λ��
				i = left + tmp.size() - 1;
			}
		}
		cout << str << endl;
	}

	return 0;
}