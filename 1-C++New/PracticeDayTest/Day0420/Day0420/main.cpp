#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	Solution(int n = 10) :
		_size(0),
		_capacity(10)
	{
		_a = (int*)malloc(sizeof(int)*_capacity);
	}
	void push(int value) {
		if (_min.empty())
		{
			_min.push(value);
		}
		else
		{
			if (value < _min.top())
				_min.push(value);
		}
		if (_size == _capacity)
		{
			_capacity *= 2;
			_a = (int*)realloc(_a, sizeof(int)* _capacity);
		}
		_a[_size] = value;
		++_size;
	}
	void pop() {
		if (_size == 0)
			return;
		if (_a[_size - 1] == _min.top())
			_min.pop();
		--_size;
	}
	int top() {
		if (_size == 0)
			return 0;
		return _a[_size - 1];
	}
	int min() {
		if (_size == 0)
			return 0;
		return _min.top();
	}
	~Solution()
	{
		free(_a);
		_size = _capacity = 0;
	}
private:
	stack<int> _min;
	int* _a;
	int _size;
	int _capacity;
};


int main()
{

	system("pause");
	return 0;
}