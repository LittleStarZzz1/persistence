#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

//���LRU����ṹ
struct dListNode
{
	int _key;
	int _val;
};

class LRU
{
public:
	LRU(int maxsize) :
		_size(maxsize)
	{
		_list.resize(maxsize);//˫�������������������ڵ�����
	}
	int get(int key)
	{
		if (_um.find(key) == _um.end())
			return -1;//û�ҵ�
		//�ҵ���
		dListNode ret;
		ret = *_um[key];
		//�ҵ�֮��, ��������˫������ͷ��
		_list.erase(_um[key]);
		_list.push_front(ret);

		return ret._val;
	}

	void set(int key, int val)
	{
		if (_um.find(key) == _um.end())//��ʾ�ýڵ�δ������
		{
			if (_list.size() == _size)//�����нڵ���������
			{
				dListNode tmp = _list.back();//Ϊ�˷���ȡ����ϣӳ��,��ȡ��β���ڵ�
				_um.erase(tmp._key);//ȡ����ϣӳ���ϵ
				_list.pop_back();//��ʱɾ��β���ڵ�
			}
			_list.push_front(dListNode{ key, val });//�½ڵ��������ͷ��

			//�����µĹ�ϣӳ��
			_um[key] = _list.begin();
		}
		else//��ʾ�ýڵ��Ѿ�������
		{
			//��ʱ�����ƶ���˫������ͷ����ʾ���������
			_list.erase(_um[key]);
			_list.push_front(dListNode{ key, val });
			_um[key] = _list.begin();
		}
	}

private:
	unordered_map<int, list<dListNode>::iterator> _um;
	list<dListNode> _list;

	size_t _size;//��ʾ˫�������������������ڵ�����
};

int main()
{
	int N, K;
	int opt, x1, x2;
	while (cin >> N >> K)
	{
		LRU lru(K);

		for (int i = 0; i < N; ++i)
		{
			cin >> opt;
			if (opt == 1)
			{
				cin >> x1 >> x2;
				lru.set(x1, x2);
			}
			else if (opt == 2)
			{
				cin >> x1;
				cout << lru.get(x1) << endl;
			}
		}
	}
	return 0;
}