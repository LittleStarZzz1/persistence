#include <iostream>
#include <string>
#include <vector>

using namespace std;

//参数解析
int main() {
	string str;
	while (getline(cin, str)) {
		bool flag = false;//用flag标识引号开始和结束
		vector<string> vec;
		string row;
		for (size_t i = 0; i < str.size(); i++)
		{
			if (flag)
			{//在""之间的内容
				if (str[i] != '\"')
					row += str[i];
				else
					flag = false;
			}
			else
			{
				if (str[i] == ' ') //先找' '
				{
					vec.push_back(row);
					row = "";//重置为空串
				}
				else if (str[i] == '\"') //遇到" 将flag置为true
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