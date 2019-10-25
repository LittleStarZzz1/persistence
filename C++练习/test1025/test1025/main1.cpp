#include <iostream>
#include <string>
#include <vector>
#include <stack>

//�沨�����ʽ���

using namespace std;

int evalRPN(vector<string>& tokens)
{
	stack<int> tmp;
	int a, b;

	for (auto & vsi : tokens)
	{
		if (isdigit(vsi[0]) || vsi.size() > 1)
		{
			tmp.push(atoi(vsi.c_str()));
		}
		else 
		{
			a = tmp.top();
			tmp.pop();
			b = tmp.top();


			switch (vsi[0])
			{
			case '+':
				tmp.top() = b + a;
				break;
			case '-':
				tmp.top() = b - 1;
				break;
			case '*':
				tmp.top() = b * a;
				break;
			case '/':
				tmp.top() = b / a;
				break;
			}
		}
	}
	return tmp.top();

}

int main()
{
	vector<string> vs{ "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+" };

	cout << evalRPN(vs) << endl;

	system("pause");
	return 0;
}