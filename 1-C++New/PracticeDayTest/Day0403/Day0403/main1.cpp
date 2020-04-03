#include <iostream>
#include <stack>

using namespace std;

//两个栈实现一个队列
class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		while (!stack1.empty())
		{
			stack2.push(stack1.top());
			stack1.pop();
		}
		int returnNum = stack2.top();
		stack2.pop();
		while (!stack2.empty())
		{
			stack1.push(stack2.top());
			stack2.pop();
		}
		return returnNum;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};

int main()
{


	system("pause");
	return 0;
}