#include <iostream>

using namespace std;

//链表中倒数第k个结点
struct ListNode
{
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
#elif 1
		if (k == 0 || pListHead == nullptr)
			return nullptr;
		static unsigned int count = 0;
		ListNode* ret = FindKthToTail(pListHead->next, k);
		++count;
		if (count == k)
			return pListHead;
		return ret;
#endif
	}

};

void test()
{
	ListNode n1(1);
	ListNode n2(2);
	ListNode n3(3);
	ListNode n4(4);
	ListNode n5(5);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	Solution s;
	ListNode* ret = s.FindKthToTail(&n1, 2);
	ListNode* cur = ret;
	for (; cur != nullptr; cur = cur->next)
	{
		cout << cur->val << ' ';
	}
	cout << endl;



}

int main()
{
	test();

	system("pause");
	return 0;
}