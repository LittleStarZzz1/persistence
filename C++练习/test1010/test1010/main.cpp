#include <iostream>
#include <stack>

using namespace std;

class stackQueue{
	stack<int> sk1;
public:
	stackQueue()
	{

	}

	void push(int x)
	{
		sk1.push(x);
	}

	void pop()
	{
		stack<int> sk2;
		stack<int> sk3;
		while (sk1.size() > 1)
		{
			sk2.push(sk1.top());
			sk1.pop();
		}
		while (sk2.size())
		{
			sk3.push(sk2.top());
			sk2.pop();
		}
		sk1 = sk3;

	}

	int front()
	{
		stack<int> sk2;
		stack<int> sk3;
		while (sk1.size() > 1)
		{
			sk2.push(sk1.top());
			sk1.pop();
		}
		int tmp = sk1.top();
		sk2.push(sk1.top());
		while (sk2.size())
		{
			sk3.push(sk2.top());
			sk2.pop();
		}
		sk1 = sk3;
		return tmp;
	}

};

int main1()
{
	stackQueue sq;

	sq.push(1);
	sq.push(2);
	sq.push(3);
	sq.push(4); 
	sq.push(5);

	cout << sq.front() << endl;
	sq.pop();
	cout << sq.front() << endl;
	sq.pop();
	cout << sq.front() << endl;
	sq.pop();
	cout << sq.front() << endl;
	sq.pop();
	cout << sq.front() << endl;
	sq.pop();

	system("pause");
	return 0;
}