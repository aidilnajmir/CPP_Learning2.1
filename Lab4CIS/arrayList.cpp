// File: arrayList.cpp

// Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 03/08/2022

// Date of Working Version of this Program: 03/09/2022



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

template <class elemType>
class unorderedArrayListType : public arrayListType<elemType>
{
public:
	void insertAt(int location, const elemType& insertItem);
	void insertEnd(const elemType& insertItem);
	void replaceAt(int location, const elemType& repItem);
	int seqSearch(const elemType& searchItem) const;
	void remove(const elemType& removeItem);

	unorderedArrayListType(int size = 100);	// Constructor
};

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
        //cout << endl;
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

template <class elemType>
void unorderedArrayListType<elemType>::insertAt(int location, const elemType& insertItem)
{
	if (location < 0 || location >= this->maxSize)
		cout << "The position of the item to be inserted is out of range." << endl;
	else if (this->length >= this->maxSize)
		cout << "Cannot insert in full list." << endl;
	else
		for (int i = this->length; i > location; i--)
		{
			this->list[i] = this->list[i - 1];  //move the elements down

			this->list[location] = insertItem; //insert the item at the specified position

			this->length++; //increment the length
		}
} //end insertAt

template <class elemType>
void unorderedArrayListType<elemType>::insertEnd(const elemType& insertItem)
{
	if (this->length >= this->maxSize)	//the list is full
		cout << "Cannot insert in a full list." << endl;
	else
	{
		this->list[this->length] = insertItem;	//insert the item at the end
		this->length++;	//increment the length
	}
} //end insertEnd

template <class elemType>
void unorderedArrayListType<elemType>::replaceAt(int location, const elemType& repItem)
{
	if (location < 0 || location >= this->length)
		cout << "The location of the item to be replaced is out of range." << endl;
	else
		this->list[location] = repItem;
} //end replaceAt

template <class elemType>
int unorderedArrayListType<elemType>::seqSearch(const elemType& searchItem) const
{
	int loc;
	bool found = false;

	for (loc = 0; loc < this->length; loc++)
		if (this->list[loc] == searchItem)
		{
			found = true;
			break;
		}

	if (found)
		return loc;
	else
		return -1;
} // end seqSearch

template <class elemType>
void unorderedArrayListType<elemType>::remove(const elemType& removeItem)
{
	int loc;

	if (this->length == 0)
		cout << "Cannot delete from an empty list." << endl;
	else
	{
		loc = seqSearch(removeItem);

		if (loc != -1)
			this->removeAt(loc);
		else
			cout << "The item to be deleted is not in the list." << endl;
	}
} //end remove

template <class elemType>
unorderedArrayListType<elemType>::unorderedArrayListType(int size) : arrayListType<elemType>() {}

int main() {

		int size;
		unorderedArrayListType<float> floatList(25);

		float element;

		cout << "Enter list size: ";
		cin >> size;
		cout << endl << "Enter " << size << " elements:" << endl;

		for (int i = 0; i < size; i++)
		{
			cin >> element;
			floatList.insertEnd(element);
		}
		cout << endl;

		cout << "arrayList: " << endl;
		floatList.print();
		cout << endl;

		cout << "Enter item to be deleted: ";
		cin >> element;
		cout << endl;

		floatList.remove(element);
		cout << "After removing " << element << ", arrayList: ";
		floatList.print();
		
		cout << endl << "Enter item to search: ";
		cin >> element;
		cout << endl;

		if (floatList.seqSearch(element) != -1)
			cout << element << " is found in arrayList." << endl;
		else
			cout << element << " is not in arrayList." << endl;

	return 0;
}