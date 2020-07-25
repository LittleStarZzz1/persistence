#include <iostream>

using namespace std;

//��ת����
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
			return pHead;//����Ϊ��,��������ֻ��һ���ڵ�,ֱ�ӷ���pHead
		//�ߵ��������������������ڵ�
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