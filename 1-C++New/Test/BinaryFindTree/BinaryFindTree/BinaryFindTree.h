#pragma once

/*
//�����������Ļ���ʵ��
template<class K>
struct BTreeNode
{
	BTreeNode<K>* _left;
	BTreeNode<K>* _right;

	K _key;

	//���캯��
	BTreeNode(const K& key) :
		_left(nullptr),
		_right(nullptr),
		_key(key)
	{}
};

template <class K>
class BTree
{
	typedef BTreeNode<K> Node;
public:
	bool insert(const K& key)
	{
		if (_root == nullptr)
		{
			_root = new Node(key);
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
				return false;
		}
		cur = new Node(key);

		if (key < parent->_key)
			parent->_left = cur;
		else
			parent->_right = cur;
		return true;
	}

	bool Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (key > cur->_key)
				cur = cur->_right;
			else if (key < cur->_key)
				cur = cur->_left;
			else
				return true;
		}
		return false;
	}

	bool erase(const K& key)
	{
		//���ҵ���Ӧ��key
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = _root->_right;
			}

			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				//ɾ��ʱ�ɷ�Ϊ�������
				//1. ��Ϊ��
				//2. ��Ϊ��
				//3. ���Ҿ���Ϊ��
				if (cur->_left == nullptr)
				{
					if (cur == _root)
					{
						//Ҫɾ���Ľڵ������Ǹ��ڵ�,��������Ϊ��,Ҫ���ҵ��ҽڵ��Ϊ���ڵ�
						_root = cur->_right;
					}
					else
					{
						if (parent->_left == cur)
							//Ҫɾ���ڵ��Ǹ��ڵ����ڵ�,�ͽ��ҵ��������ҵ����׽ڵ����
							parent->_left = cur->_right;
						else
							//Ҫɾ���ڵ��Ǹ��ڵ���ҽڵ�,�ͽ��ҵ��������ҵ����׽ڵ��ұ�
							parent->_right = cur->_right;
					}
					delete cur;

				}
				else if (cur->_right == nullptr)
				{
					if (cur == _root)
						_root = cur->_left;
					else
					{
						if (parent->_left == cur)
							parent->_left = cur->_left;
						else
							parent->_right = cur->_left;
					}

					delete cur;

				}
				else
				{
					//��Ҫɾ���ڵ�����Ҷ���Ϊ��,������Ҫ���ҵ���������ýڵ�Ľڵ�
					//һ���ǵ�ǰ�ڵ������������ҽڵ�, һ���ǵ�ǰ�ڵ��������������ڵ�
					Node* RightMinParent = cur;
					Node* RightMin = cur->_right;//����������������������ڵ�
					while (RightMin->_left)
					{
						RightMinParent = RightMin;
						RightMin = RightMin->_left;//ѭ������ʱ������������������ڵ�
					}
					//�滻��Ҫɾ���Ľڵ�
					cur->_key = RightMin->_key;//������ת��Ϊɾ��RightMIn�ڵ�
					//�����ҵ���������ڵ�,�ɶ�Ӧ������Ϊ�յ����
					if (RightMinParent->_left == RightMin)
						RightMinParent->_left = RightMin->_right;
					else
						RightMinParent->_right = RightMin->_right;
					delete RightMin;
				}
				return true;//�ҵ���ɾ������true;
			}
		}
		return false;//û�ҵ�ֱ�ӷ���false
	}


	void _inorder(Node* root)
	{
		if (root == nullptr)
			return;
		_inorder(root->_left);
		std::cout << root->_key << " ";
		_inorder(root->_right);

	}
	void inorder()//ֱ���ô˺������еݹ�,���ⲿ�޷�������ڵ�,�����Ҫ�Ӻ������еݹ�
	{
		_inorder(_root);
		std::cout << std::endl;
	}

	//	void _InOrder(Node* root)
	//	{
	//		if (root == nullptr)
	//			return;
	//
	//		_InOrder(root->_left);
	//		cout << root->_key << " ";
	//		_InOrder(root->_right);
	//	}
	//
	//	void InOrder()
	//	{
	//		_InOrder(_root);
	//		cout << endl;
	//	}

private:
	Node* _root = nullptr;
};
*/

// key-val
template<class K, class V>
struct BTreeNode
{
	BTreeNode<K, V>* _left;
	BTreeNode<K, V>* _right;

	K _key;
	V _val;

	//���캯��
	BTreeNode(const K& key, const V& val) :
		_left(nullptr),
		_right(nullptr),
		_key(key),
		_val(val)
	{}
};

template <class K, class V>
class BTree
{
	typedef BTreeNode<K, V> Node;
public:
	bool insert(const K& key, const V& val)
	{
		if (_root == nullptr)
		{
			_root = new Node(key, val);
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
				return false;
		}
		cur = new Node(key, val);

		if (key < parent->_key)
			parent->_left = cur;
		else
			parent->_right = cur;
		return true;
	}

	Node* Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (key > cur->_key)
				cur = cur->_right;
			else if (key < cur->_key)
				cur = cur->_left;
			else
				return cur;
		}
		return nullptr;
	}

	bool erase(const K& key)
	{
		//���ҵ���Ӧ��key
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (key > cur->_key)
			{
				parent = cur;
				cur = _root->_right;
			}

			else if (key < cur->_key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				//ɾ��ʱ�ɷ�Ϊ�������
				//1. ��Ϊ��
				//2. ��Ϊ��
				//3. ���Ҿ���Ϊ��
				if (cur->_left == nullptr)
				{
					if (cur == _root)
					{
						//Ҫɾ���Ľڵ������Ǹ��ڵ�,��������Ϊ��,Ҫ���ҵ��ҽڵ��Ϊ���ڵ�
						_root = cur->_right;
					}
					else
					{
						if (parent->_left == cur)
							//Ҫɾ���ڵ��Ǹ��ڵ����ڵ�,�ͽ��ҵ��������ҵ����׽ڵ����
							parent->_left = cur->_right;
						else
							//Ҫɾ���ڵ��Ǹ��ڵ���ҽڵ�,�ͽ��ҵ��������ҵ����׽ڵ��ұ�
							parent->_right = cur->_right;
					}
					delete cur;

				}
				else if (cur->_right == nullptr)
				{
					if (cur == _root)
						_root = cur->_left;
					else
					{
						if (parent->_left == cur)
							parent->_left = cur->_left;
						else
							parent->_right = cur->_left;
					}

					delete cur;

				}
				else
				{
					//��Ҫɾ���ڵ�����Ҷ���Ϊ��,������Ҫ���ҵ���������ýڵ�Ľڵ�
					//һ���ǵ�ǰ�ڵ������������ҽڵ�, һ���ǵ�ǰ�ڵ��������������ڵ�
					Node* RightMinParent = cur;
					Node* RightMin = cur->_right;//����������������������ڵ�
					while (RightMin->_left)
					{
						RightMinParent = RightMin;
						RightMin = RightMin->_left;//ѭ������ʱ������������������ڵ�
					}
					//�滻��Ҫɾ���Ľڵ�
					cur->_key = RightMin->_key;//������ת��Ϊɾ��RightMIn�ڵ�
					//�����ҵ���������ڵ�,�ɶ�Ӧ������Ϊ�յ����
					if (RightMinParent->_left == RightMin)
						RightMinParent->_left = RightMin->_right;
					else
						RightMinParent->_right = RightMin->_right;
					delete RightMin;
				}
				return true;//�ҵ���ɾ������true;
			}
		}
		return false;//û�ҵ�ֱ�ӷ���false
	}


	void _inorder(Node* root)
	{
		if (root == nullptr)
			return;
		_inorder(root->_left);
		std::cout << root->_key << ":" << root->_val << " ";
		_inorder(root->_right);

	}
	void inorder()//ֱ���ô˺������еݹ�,���ⲿ�޷�������ڵ�,�����Ҫ�Ӻ������еݹ�
	{
		_inorder(_root);
		std::cout << std::endl;
	}

	//	void _InOrder(Node* root)
	//	{
	//		if (root == nullptr)
	//			return;
	//
	//		_InOrder(root->_left);
	//		cout << root->_key << " ";
	//		_InOrder(root->_right);
	//	}
	//
	//	void InOrder()
	//	{
	//		_InOrder(_root);
	//		cout << endl;
	//	}

private:
	Node* _root = nullptr;
};

