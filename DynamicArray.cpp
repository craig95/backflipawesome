#include "DynamicArray.h"
#include "DynamicNode.h"
#include <iostream>

using namespace std;

template <class T>
void DynamicArray<T> ::operator-=(const T obj)
{
	
}

template <class T>
void DynamicArray<T>::operator -=(const DynamicArray<T> &obj)
{
	
}

template <class T>
bool DynamicArray<T> ::operator>(const DynamicArray<T> &obj)
{
	return false;
}

template <class T>
T DynamicArray<T>::operator [](const int i)
{
	return 0;
}

template <class T>
bool DynamicArray<T>::insertNodeAt(const int i, const T aValue)
{
	DynamicNode<T>* temp = new DynamicNode<T>(aValue);
	DynamicNode<T> *nodePtr;
	if (!(head))
	{
		if (i==1)
		{
			head = temp;
			return true;
		}
		else
		{
			return false;
		}			
	}
	else
	{
		
		int size=0;
		
		nodePtr = head;
		while (nodePtr)
		{
			++size;
			nodePtr = nodePtr->next;
		}
		
		if (!(i<1 || i>size))
		{
			if (i==1)
			{
				temp->prev = 0;
				temp->next = head;
				head->prev = temp;
				head = temp;
			}
			else
			{
				int j=1;
				nodePtr = head;
				while (j<=size)
				{
					if (i==j)
					{
						temp->prev = nodePtr->prev;
						nodePtr->prev = temp;
						temp->next = nodePtr;
						temp->prev->next = temp;
						return true;
					}
					++j;
					nodePtr->prev = nodePtr;
					nodePtr=nodePtr->next;
					
				}
				return true;
			}
		}
		else
			return false;
	}
	return true;
}

template <class T>
ostream & operator<<(std::ostream &aStream, const DynamicArray<T> &obj)
{
	DynamicNode<T>* nodePtr = obj.head;
	while (nodePtr)
	{
		aStream << *nodePtr->value << " ";
		nodePtr = nodePtr->next;
	}
	return aStream;
}