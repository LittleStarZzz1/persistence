#pragma once

/*
//二叉搜索树的基本实现
template<class K>
struct BTreeNode
{
	BTreeNode<K>* _left;
	BTreeNode<K>* _right;

	K _key;

	//构造函数
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
		//先找到对应的key
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
				//删除时可分为三种情况
				//1. 左为空
				//2. 右为空
				//3. 左右均不为空
				if (cur->_left == nullptr)
				{
					if (cur == _root)
					{
						//要删除的节点正好是根节点,并且左树为空,要将我的右节点变为根节点
						_root = cur->_right;
					}
					else
					{
						if (parent->_left == cur)
							//要删除节点是父节点的左节点,就将我的右子树挂到父亲节点左边
							parent->_left = cur->_right;
						else
							//要删除节点是父节点的右节点,就将我的右子树挂到父亲节点右边
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
					//当要删除节点的左右都不为空,我们需要先找到可以替代该节点的节点
					//一个是当前节点左子树的最右节点, 一个是当前节点的右子树的最左节点
					Node* RightMinParent = cur;
					Node* RightMin = cur->_right;//这里我们找右子树的最左节点
					while (RightMin->_left)
					{
						RightMinParent = RightMin;
						RightMin = RightMin->_left;//循环跳出时就找了右子树的最左节点
					}
					//替换需要删除的节点
					cur->_key = RightMin->_key;//将问题转化为删除RightMIn节点
					//由于找到的是最左节点,可对应上述左为空的情况
					if (RightMinParent->_left == RightMin)
						RightMinParent->_left = RightMin->_right;
					else
						RightMinParent->_right = RightMin->_right;
					delete RightMin;
				}
				return true;//找到并删除返回true;
			}
		}
		return false;//没找到直接返回false
	}


	void _inorder(Node* root)
	{
		if (root == nullptr)
			return;
		_inorder(root->_left);
		std::cout << root->_key << " ";
		_inorder(root->_right);

	}
	void inorder()//直接用此函数进行递归,在外部无法传入根节点,因此需要子函数进行递归
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

	//构造函数
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
		//先找到对应的key
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
				//删除时可分为三种情况
				//1. 左为空
				//2. 右为空
				//3. 左右均不为空
				if (cur->_left == nullptr)
				{
					if (cur == _root)
					{
						//要删除的节点正好是根节点,并且左树为空,要将我的右节点变为根节点
						_root = cur->_right;
					}
					else
					{
						if (parent->_left == cur)
							//要删除节点是父节点的左节点,就将我的右子树挂到父亲节点左边
							parent->_left = cur->_right;
						else
							//要删除节点是父节点的右节点,就将我的右子树挂到父亲节点右边
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
					//当要删除节点的左右都不为空,我们需要先找到可以替代该节点的节点
					//一个是当前节点左子树的最右节点, 一个是当前节点的右子树的最左节点
					Node* RightMinParent = cur;
					Node* RightMin = cur->_right;//这里我们找右子树的最左节点
					while (RightMin->_left)
					{
						RightMinParent = RightMin;
						RightMin = RightMin->_left;//循环跳出时就找了右子树的最左节点
					}
					//替换需要删除的节点
					cur->_key = RightMin->_key;//将问题转化为删除RightMIn节点
					//由于找到的是最左节点,可对应上述左为空的情况
					if (RightMinParent->_left == RightMin)
						RightMinParent->_left = RightMin->_right;
					else
						RightMinParent->_right = RightMin->_right;
					delete RightMin;
				}
				return true;//找到并删除返回true;
			}
		}
		return false;//没找到直接返回false
	}


	void _inorder(Node* root)
	{
		if (root == nullptr)
			return;
		_inorder(root->_left);
		std::cout << root->_key << ":" << root->_val << " ";
		_inorder(root->_right);

	}
	void inorder()//直接用此函数进行递归,在外部无法传入根节点,因此需要子函数进行递归
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

