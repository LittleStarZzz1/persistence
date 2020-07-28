#include <iostream>
using namespace std;

//ɾ�������е��ظ����
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

		ListNode* new_head = new ListNode(0);//Ϊ�˱��ڴ���ȫ����ͬ�����,����һ���µ�ͷ���
		new_head->next = pHead;

		//prev��Զ��lastǰ��
		ListNode* prev = new_head;
		ListNode* last = prev->next;

		while (last != nullptr)
		{
			//��last���ȥ�ж�val����ͬ,prev��lastͬ�������
			while (last->next != nullptr && last->val != last->next->val)
			{
				prev = prev->next;
				last = last->next;
			}
			//������ƶ�last
			while (last->next != nullptr && last->val == last->next->val)
				last = last->next;

			//�ߵ������Ϊ�������, prev��Զָ�����ǰ����Ч���
			//1. last->next != nullptr, ��ʱ�ҵ�һ����Ч���䷶Χ(prev, last], ����ɾ������
			//2. last->next == nullptr, ��ʱ���൱���Ѿ��ҵ�����ĩβ, ɾ������(prev, last]���൱��prev->next = nullptr
			//3. last->next == nullptr && prev->next = last, ��˵��prev��last�������,Ҳ����˵����Ҫȥ��
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