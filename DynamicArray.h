#ifndef DYNAMICARRAY_H 
#define DYNAMICARRAY_H
#include "DynamicNode.h"
#include <ostream>

template <class T> 
class DynamicArray;

template <class T>
std::ostream & operator<<(std::ostream &, const DynamicArray<T> &); 

template <class T> 
class DynamicArray 
{ 
	private: 
	DynamicNode<T> *head; // List head pointer 
	public: 
	// Constructor 
	DynamicArray() 
	{ head = 0; } 
	// Destructor 
	~DynamicArray()
	{
		DynamicNode<T> *nodePtr = head;
		DynamicNode<T> *nextNode;
		while (nodePtr != 0) 
		{ 
			nextNode = nodePtr->next;  
			delete nodePtr; 
 			nodePtr = nextNode; 
		}
	}
	
	// Linked list operations
	void operator-=(const DynamicArray &);
	void operator-=(const T);
	void operator=(const DynamicArray &); 	
	bool operator>(const DynamicArray &);
	T operator [](const int);
	bool insertNodeAt(const int, const T);
	friend std::ostream & operator<< <>(std::ostream &, const DynamicArray<T> &); 
}; 
#endif