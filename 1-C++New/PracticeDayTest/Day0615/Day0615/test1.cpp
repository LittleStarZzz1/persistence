#include <iostream>
#include <string>
#include <vector>

using namespace std;

//��������
int main() {
	string str;
	while (getline(cin, str)) {
		bool flag = false;//��flag��ʶ���ſ�ʼ�ͽ���
		vector<string> vec;
		string row;
		for (size_t i = 0; i < str.size(); i++)
		{
			if (flag)
			{//��""֮�������
				if (str[i] != '\"')
					row += str[i];
				else
					flag = false;
			}
			else
			{
				if (str[i] == ' ') //����' '
				{
					vec.push_back(row);
					row = "";//����Ϊ�մ�
				}
				else if (str[i] == '\"') //����" ��flag��Ϊtrue
					flag = true;
				else
					row += str[i];
			}
		}
		vec.push_back(row);
		cout << vec.size() << endl;
		for (auto i : vec)
			cout << i << endl;
	}
	return 0;
}