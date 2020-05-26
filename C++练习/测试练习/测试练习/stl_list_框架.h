template <class T>
struct __list_node {
	typedef void* void_pointer;
	void_pointer next;
	void_pointer prev;
	T data;
};

template<class T, class Ref, class Ptr>
struct __list_iterator {
  typedef __list_iterator<T, T&, T*>             iterator;
  typedef __list_iterator<T, const T&, const T*> const_iterator;
  typedef __list_iterator<T, Ref, Ptr>           self;

  typedef __list_node<T>* link_type;

  link_type node;

  __list_iterator(link_type x) : node(x) {}

  bool operator==(const self& x) const { return node == x.node; }
  bool operator!=(const self& x) const { return node != x.node; }
  reference operator*() const { return (*node).data; }
  self& operator++() { 
    node = (link_type)((*node).next);
    return *this;
  }
  self operator++(int) { 
    self tmp = *this;
    ++*this;
    return tmp;
  }
  self& operator--() { 
    node = (link_type)((*node).prev);
    return *this;
  }
  self operator--(int) { 
    self tmp = *this;
    --*this;
    return tmp;
  }
};

template <class T, class Alloc = alloc>
class list {
protected:
  typedef void* void_pointer;
  typedef __list_node<T> list_node;
public:      
  typedef T value_type;
public:
  typedef __list_iterator<T, T&, T*>             iterator;
protected:
  link_type node;
}