#include <iostream>

using namespace std;

//反转单链表
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
#if 0
		if (pHead == nullptr || pHead->next == nullptr)
			return pHead;
		ListNode* cur = pHead->next;
		ListNode* prev = pHead;
		while (cur->next != nullptr)
		{
			ListNode* tmp = cur->next;
			cur->next = prev;
			prev = cur;
			cur = tmp;
		}
		cur->next = prev;
		pHead->next = nullptr;
		return cur;
#else 1
		if (pHead == nullptr || pHead->next == nullptr)
			return pHead;
		ListNode* prev = nullptr;
		ListNode* cur = pHead;
		while (cur != nullptr)
		{
			ListNode* tmp = cur->next;
			cur->next = prev;
			if (tmp == nullptr)
				break;
			prev = cur;
			cur = tmp;
		}
		return cur;

#endif
	}
};

int main()
{

	system("pause");
	return 0;
}