#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
#if 0
	//递归思路
	ListNode* _reversePrint(ListNode* head, vector<int>& v)
	{
		if (head == nullptr)
			return nullptr;
		_reversePrint(head->next, v);
		v.push_back(head->val);
		return nullptr;
	}
	vector<int> reversePrint(ListNode* head) {
		vector<int> v;
		if (head == nullptr)
			return v;
		_reversePrint(head, v);
		return v;
	}
#elif 1
	//非递归思路
	vector<int> reversePrint(ListNode* head) {
		vector<int> v;
		if (head == nullptr)
			return v;
		while (head != nullptr)
		{
			v.insert(v.begin(), head->val);
			head = head->next;
		}
		return v;
	}

#endif
};


int main()
{


	system("pause");
	return 0;
}