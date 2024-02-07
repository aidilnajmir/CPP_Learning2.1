#ifndef H_unorderedSet

#define H_ unorderedSet

#include "unorderedArrayListType.h"

template <class elemType>

class unorderedSet : public unorderedArrayListType<elemType>

{

public:

    void insertAt(int location, const elemType& insertItem);

    void insertEnd(const elemType& insertItem);

    void replaceAt(int location, const elemType& repItem);

    unorderedSet(int size = 100);

    //Constructor

    unorderedSet operator+(const unorderedSet& other);

    unorderedSet operator-(const unorderedSet& other);

};

template <class elemType>

void unorderedSet<elemType>::insertAt(int location, const elemType& insertItem)

{

    if (unorderedArrayListType<elemType>::seqSearch(insertItem) == -1)

    {

        unorderedArrayListType<elemType>::insertAt(location, insertItem);

    }

}

template <class elemType>

void unorderedSet<elemType>::insertEnd(const elemType& insertItem)

{

    if (unorderedArrayListType<elemType>::seqSearch(insertItem) == -1)

    {

        unorderedArrayListType<elemType>::insertEnd(insertItem);

    }

}

template <class elemType>

void unorderedSet<elemType>::replaceAt(int location, const elemType& insertItem)

{

    if (unorderedArrayListType<elemType>::seqSearch(insertItem) == -1)

    {

        unorderedArrayListType<elemType>::replaceAt(location, insertItem);

    }

}

template <class elemType>

unorderedSet<elemType>::unorderedSet(int size) : unorderedArrayListType<elemType>(size)

{

}

template <class elemType>

unorderedSet<elemType> unorderedSet<elemType>:: operator+(const unorderedSet<elemType>& other)

{

    elemType item;

    int resultMaxSize = this->maxSize + other.maxSize;

    unorderedSet<elemType> result(resultMaxSize);

    for (int i = 0; i < this->length; i++)

    {

        this->retrieveAt(i, item);

        result.insertEnd(item);

    }

    for (int i = 0; i < other.length; i++)

    {

        other.retrieveAt(i, item);

        result.insertEnd(item);

    }

    return result;

}

template <class elemType>

unorderedSet<elemType> unorderedSet<elemType>:: operator-(const unorderedSet<elemType>& other)

{

    elemType item;

    int resultMaxSize = 0;

    if (this->maxSize > other.maxSize)

        resultMaxSize = this->maxSize;

    else

        resultMaxSize = other.maxSize;

    unorderedSet<elemType> result(resultMaxSize);

    for (int i = 0; i < this->length; i++)

    {

        this->retrieveAt(i, item);

        if (other.seqSearch(item) != -1)

        {

            result.insertEnd(item);

        }

    }

    return result;

}

#endif