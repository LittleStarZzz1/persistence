#include <iostream>

using namespace std;

//链表中倒数第k个结点
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
}
};
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
#if 0
		ListNode* cur = pListHead;
		ListNode* tmp = pListHead;
		unsigned int count = 0;
		while (cur != nullptr)
		{
			++count;
			cur = cur->next;
		}
		if (count < k)
			return nullptr;
		for (unsigned int i = 0; i < count - k; ++i)
			tmp = tmp->next;
		return tmp;

	}
#elif 1

#endif
};

int main()
{

	system("pause");
	return 0;
}