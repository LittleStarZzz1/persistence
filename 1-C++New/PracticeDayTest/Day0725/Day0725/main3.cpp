#include <iostream>

using namespace std;

//反转链表
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
	val(x), next(nullptr) {
	}
};
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == nullptr || pHead->next == nullptr)
			return pHead;//链表为空,或者链表只有一个节点,直接返回pHead
		//走到这里链表至少有两个节点
		ListNode* prev = pHead;
		ListNode* mid = pHead->next;
		ListNode* post = mid->next;

		while (post)
		{
			mid->next = prev;
			prev = mid;
			mid = post;
			post = post->next;
		}
		mid->next = prev;
		pHead->next = nullptr;
		pHead = mid;

		return pHead;
	}
};

int main()
{

	return 0;
}