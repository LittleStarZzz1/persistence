#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

//设计LRU缓存结构
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
		_list.resize(maxsize);//双向链表中所能容纳最大节点数量
	}
	int get(int key)
	{
		if (_um.find(key) == _um.end())
			return -1;//没找到
		//找到了
		dListNode ret;
		ret = *_um[key];
		//找到之后, 将其移至双向链表头部
		_list.erase(_um[key]);
		_list.push_front(ret);

		return ret._val;
	}

	void set(int key, int val)
	{
		if (_um.find(key) == _um.end())//表示该节点未被设置
		{
			if (_list.size() == _size)//链表中节点数量满了
			{
				dListNode tmp = _list.back();//为了方便取消哈希映射,先取到尾部节点
				_um.erase(tmp._key);//取消哈希映射关系
				_list.pop_back();//此时删除尾部节点
			}
			_list.push_front(dListNode{ key, val });//新节点放入链表头部

			//建立新的哈希映射
			_um[key] = _list.begin();
		}
		else//表示该节点已经被设置
		{
			//这时将其移动至双向链表头部表示最近被访问
			_list.erase(_um[key]);
			_list.push_front(dListNode{ key, val });
			_um[key] = _list.begin();
		}
	}

private:
	unordered_map<int, list<dListNode>::iterator> _um;
	list<dListNode> _list;

	size_t _size;//表示双向链表中所能容纳最大节点数量
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