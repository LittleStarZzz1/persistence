#include <iostream>

using namespace std;


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
	val(x), next(NULL) {
	}
};
class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == nullptr && pHead2 != nullptr)
			return pHead2;
		if (pHead1 != nullptr && pHead2 == nullptr)
			return pHead1;
		if (pHead1 == nullptr && pHead2 == nullptr)
			return nullptr;
		ListNode* p1 = pHead1;
		ListNode* p2 = pHead2;
		ListNode* tmp1 = nullptr;
		while (p1 != nullptr && p2 != nullptr)
		{
			while (p1 != nullptr && (p2->val >= p1->val))
			{
				tmp1 = p1;
				p1 = p1->next;
			}
			if (tmp1 != nullptr)
			{
				tmp1->next = p2;
				tmp1 = p2;
			}
			ListNode* tmp2 = p2->next;
			if (tmp2 == nullptr)
			{
				p2->next = p1;
				break;
			}
			if (p1 != nullptr)
				p2->next = p1;
			else
				p2->next = tmp2;
			p2 = tmp2;
		}
		return (pHead1->val <= pHead2->val) ? pHead1 : pHead2;
	}
};

int main()
{


	system("pause");
	return 0;
}