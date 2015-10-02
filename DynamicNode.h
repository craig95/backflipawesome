#ifndef DYNAMICNODE_H
#define DYNAMICNODE_H

template <class T>
class DynamicNode
{
public:
	T* value;
	DynamicNode *next;
	DynamicNode *prev;
	DynamicNode(T);
	DynamicNode();
	~DynamicNode();
};

template <class T>
DynamicNode<T>::DynamicNode(T obj)
{
	value = &obj;
	next =0;
	prev = 0;
}

template <class T>
DynamicNode<T>::~DynamicNode()
{
}

#endif