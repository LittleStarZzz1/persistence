#include <iostream>

using namespace std;

//链表中倒数第k个节点
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(nullptr)
	{}
};
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (pListHead == nullptr)
			return nullptr;
		ListNode* first = pListHead;
		ListNode* second = pListHead;

		while (first != nullptr && k)
		{
			first = first->next;
			k--;
		}
		while (first)
		{
			first = first->next;
			second = second->next;
		}
		//此时若k>0说明first一定为nullptr
		return k > 0 ? nullptr : second;
	}
};

int main()
{


	return 0;
}