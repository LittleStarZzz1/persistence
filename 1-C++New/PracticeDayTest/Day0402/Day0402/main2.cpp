#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
	      val(x), next(NULL) {
	}
};

//从尾到头打印链表
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> ret;
		if (head == NULL)
			return ret;
		ListNode* cur = NULL;
		for (cur = head; cur != NULL; cur = cur->next)
		{
			ret.insert(ret.begin(), cur->val);
		}
		return ret;
	}
};

int main()
{


	system("pause");
	return 0;
}