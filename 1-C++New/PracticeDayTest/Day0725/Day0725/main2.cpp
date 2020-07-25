#include <iostream>

using namespace std;

//�����е�����k���ڵ�
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
		//��ʱ��k>0˵��firstһ��Ϊnullptr
		return k > 0 ? nullptr : second;
	}
};

int main()
{


	return 0;
}