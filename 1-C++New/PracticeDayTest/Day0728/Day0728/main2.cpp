#include <iostream>
using namespace std;

//删除链表中的重复结点
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(nullptr) 
	{
	}
};

class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == nullptr)
			return pHead;

		ListNode* new_head = new ListNode(0);//为了便于处理全部相同的情况,构造一个新的头结点
		new_head->next = pHead;

		//prev永远在last前面
		ListNode* prev = new_head;
		ListNode* last = prev->next;

		while (last != nullptr)
		{
			//用last结点去判断val不相同,prev和last同步向后走
			while (last->next != nullptr && last->val != last->next->val)
			{
				prev = prev->next;
				last = last->next;
			}
			//相等则移动last
			while (last->next != nullptr && last->val == last->next->val)
				last = last->next;

			//走到这里分为三种情况, prev永远指向的是前驱有效结点
			//1. last->next != nullptr, 这时找到一段有效区间范围(prev, last], 将其删除即可
			//2. last->next == nullptr, 这时候相当于已经找到链表末尾, 删除区间(prev, last]后相当于prev->next = nullptr
			//3. last->next == nullptr && prev->next = last, 这说明prev与last结点相邻,也就是说不需要去重
			if (prev->next != last)
				prev->next = last->next;
			last = last->next;
		}
		return new_head->next;
	}
};

int main()
{


	return 0;
}