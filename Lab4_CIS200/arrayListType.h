#ifndef ARRAYLISTTYPE_H
#define ARRAYLISTTYPE_H

#include <iostream>

using namespace std;

template <class elemType>
class arrayListType
{
public:
	const arrayListType<elemType>& operator=(const arrayListType<elemType>&);	// Overloads the assignment operator
	bool isEmpty() const;
	bool isFull() const;
	int listSize() const;
	int maxListSize() const;
	void print() const;
	bool isItemAtEqual(int location, const elemType& item) const;
	virtual void insertAt(int location, const elemType& insertItem) = 0;
	virtual void insertEnd(const elemType& insertItem) = 0;
	void removeAt(int location);
	void retrieveAt(int location, elemType& retItem) const;
	virtual void replaceAt(int location, const elemType& repItem) = 0;
	void clearList();
	virtual int seqSearch(const elemType& searchItem) const = 0;
	virtual void remove(const elemType& removeItem) = 0;
	arrayListType(int size = 100);
	arrayListType(const arrayListType<elemType>& otherList);
	virtual ~arrayListType();

protected:
	elemType* list;	// array to hold the list elements
	int length;		// variable to store the length of the list
	int maxSize;	// variable to store the maximum size of the list
};
#endif // !ARRAYLISTTYPE_H

template <class elemType>
bool arrayListType<elemType>::isEmpty() const
{
    return (length == 0);
} //end isEmpty

template <class elemType>
bool arrayListType<elemType>::isFull() const
{
    return (length == maxSize);
} //end isFull

template <class elemType>
int arrayListType<elemType>::listSize() const
{
    return length;
} //end listSize

template <class elemType>
int arrayListType<elemType>::maxListSize() const
{
    return maxSize;
} //end maxListSize

template <class elemType>
void arrayListType<elemType>::print() const
{
    for (int i = 0; i < length; i++) {
        cout << list[i] << " ";
    }
} //end print

template <class elemType>
bool arrayListType<elemType>::isItemAtEqual(int location, const elemType& item) const
{
    if (location < 0 || location >= length)
    {
        cout << "The location of the item to be removed is out of range." << endl;

        return false;
    }
    else
        return (list[location] == item);
} //end isItemAtEqual

template <class elemType>
void arrayListType<elemType>::removeAt(int location)
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be removed is out of range." << endl;
    else
    {
        for (int i = location; i < length - 1; i++)
            list[i] = list[i + 1];

        length--;
    }
} //end removeAt

template <class elemType>
void arrayListType<elemType>::retrieveAt(int location, elemType& retItem) const
{
    if (location < 0 || location >= length)
        cout << "The location of the item to be retrieved is out of range" << endl;
    else
        retItem = list[location];
} //end retrieveAt

template <class elemType>
void arrayListType<elemType>::clearList()
{
    length = 0;
} //end clearList

template <class elemType>
arrayListType<elemType>::arrayListType(int size)
{
    if (size <= 0)
    {
        cout << "The array size must be positive. Creating "
            << "an array of the size 100." << endl;

        maxSize = 100;
    }
    else
        maxSize = size;

    length = 0;

    list = new elemType[maxSize];
} //end constructor

template <class elemType>
arrayListType<elemType>::~arrayListType()
{
    delete[] list;
} //end destructor

template <class elemType>
arrayListType<elemType>::arrayListType(const arrayListType& otherList)
{
    maxSize = otherList.maxSize;
    length = otherList.length;

    list = new elemType[maxSize];  //create the array

    for (int j = 0; j < length; j++)  //copy otherList
        list[j] = otherList.list[j];
} //end copy constructor

template <class elemType>
const arrayListType<elemType>& arrayListType<elemType>::operator=(const arrayListType<elemType>& otherList)
{
    if (this != &otherList)
    {
        delete[] list;
        maxSize = otherList.maxSize;
        length = otherList.length;

        list = new elemType[maxSize];

        for (int i = 0; i < length; i++)
            list[i] = otherList.list[i];
    }
    return *this;
} //end operator=       
