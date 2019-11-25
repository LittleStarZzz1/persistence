#pragma once

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

namespace sy{
	template <class T>
	class TreeNode
	{
		T m_data;
		TreeNode<T> * m_left;
		TreeNode<T> * m_right;

	public:

		TreeNode(const T & val = T()) :
			m_data(val),
			m_left(nullptr),
			m_right(nullptr)
		{

		}

		template <class T>
		friend class BinarySortTree;
	};

	template <class T>
	class BinarySortTree
	{
		TreeNode<T> * m_root;

		void destroy(TreeNode<T> * root)
		{
			if (root)
			{
				destroy(root->m_left);
				destroy(root->m_right);
				delete root;
			}
		}

	public:

		BinarySortTree() :
			m_root(nullptr)
		{

		}

		~BinarySortTree()
		{
			destroy(m_root);
		}

		bool insert(const T & val)
		{
			if (m_root == nullptr)
			{
				m_root = new TreeNode<T>(val);
			}

			TreeNode<T> * cur = m_root;
			TreeNode<T> * pre = nullptr;

			while (cur)
			{
				if (val < cur->m_data)
				{
					pre = cur;
					cur = cur->m_left;
				}

				else if (val > cur->m_data)
				{
					pre = cur;
					cur = cur->m_right;
				}

				else
				{
					return false;
				}
			}

			cur = new TreeNode<T>(val);

			if (val < pre->m_data)
			{
				pre->m_left = cur;
			}

			else
			{
				pre->m_right = cur;
			}

			return true;
		}

		bool erase(const T & val)
		{
			if (m_root == nullptr)
			{
				return false;
			}

			TreeNode<T> * cur = m_root;
			TreeNode<T> * pre = m_root;

			while (cur)
			{
				if (val < cur->m_data)
				{
					pre = cur;
					cur = cur->m_left;
				}

				else if (val > cur->m_data)
				{
					pre = cur;
					cur = cur->m_right;
				}

				else
				{
					break;
				}
			}

			if (cur == nullptr)
			{
				return false;
			}

			if (cur->m_left && cur->m_right)
			{
				TreeNode<T> * cur2 = cur->m_left;
				TreeNode<T> * pre2 = cur;

				if (cur2->m_right)
				{
					for (; cur2->m_right; pre2 = cur2, cur2 = cur2->m_right);
					pre2->m_right = cur2->m_left;
					cur2->m_left = cur->m_left;
				}

				cur2->m_right = cur->m_right;

				if (cur == pre)
				{
					m_root = cur2;
				}

				else
				{
					if (cur2->m_data < pre->m_data)
					{
						pre->m_left = cur2;
					}

					else
					{
						pre->m_right = cur2;
					}
				}

				delete cur;
				return true;
			}

			else if (cur->m_left)
			{
				if (cur == pre)
				{
					m_root = cur->m_left;
				}

				else
				{
					if (cur->m_data < pre->m_data)
					{
						pre->m_left = cur->m_left;
					}

					else
					{
						pre->m_right = cur->m_left;
					}
				}

				delete cur;
				return true;
			}

			else
			{
				if (cur == pre)
				{
					m_root = cur->m_right;
				}

				else
				{
					if (cur->m_data < pre->m_data)
					{
						pre->m_left = cur->m_right;
					}

					else
					{
						pre->m_right = cur->m_right;
					}
				}

				delete cur;
				return true;
			}

		}

		// 找到需要删除的节点之后，看是不是有左子树：
		//     ①：左右子树都有：
		//	       a. 左子树没有右孩子
		//                  直接让左孩子继承自己的右孩子和父亲
		//         b. 左子树有右孩子
		//                  一直向右，找到最后一个右孩子，然后将这个孩子的左子树挂在它父亲节点的右子树上，然后让它继承所要
		//                  删除节点的人际关系(左右子树和父亲)
		//         当要删除的节点是根节点时，不用继承父亲关系，但要修改根节点指向
		//     ②：只有左子树
		//                 直接让左子树继承自己的父亲关系，如果要删除的是根节点，那么直接换根即可
		//     ③：其他(只有右子树)
		//                 直接让右子树(或者空)继承自己的父亲关系，其他同上


		//中序遍历
		vector<T> Inorder()
		{
			vector<T> res;
			stack<TreeNode<T> *> s;

			TreeNode<T> * cur = m_root;

			while (cur || !s.empty())
			{
				for (; cur; cur = cur->m_left)
				{
					s.push(cur);
				}

				if (!s.empty())
				{
					cur = s.top();
					res.push_back(cur->m_data);
					s.pop();

					cur = cur->m_right;
				}
			}

			return res;
		}


	};

}