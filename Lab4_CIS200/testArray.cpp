// File: testArray.cpp

// Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 03/08/2022

// Date of Working Version of this Program: 03/09/2022



#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main() {

	int choice;

	cout << "Choose array list elements type: " << endl;
	cout << "1. float" << endl;
	cout << "2. int" << endl << endl;

	cin >> choice;

	if (choice == 1)
	{
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

		cout << "floatList: " << endl;
		floatList.print();
		cout << endl;

		cout << "Enter float to be deleted: ";
		cin >> element;
		cout << endl;

		floatList.remove(element);
		cout << "After removing " << element << ", floatList: " <<endl;
		floatList.print();

		cout << endl << "Enter float to search: ";
		cin >> element;
		cout << endl;

		if (floatList.seqSearch(element) != -1)
			cout << element << " is found in floatList." << endl;
		else
			cout << element << " is not in floatList." << endl;
	}

	if (choice == 2)
	{
		int size;
		unorderedArrayListType<int> intList(25);

		int element;
		cout << "Enter list size: ";
		cin >> size;
		cout << endl << "Enter " << size << " elements:" << endl;

		for (int i = 0; i < size; i++)
		{
			cin >> element;
			intList.insertEnd(element);
		}
		cout << endl;

		cout << "intList: " << endl;
		intList.print();
		cout << endl;

		cout << "Enter int to be deleted: ";
		cin >> element;
		cout << endl;

		intList.remove(element);
		cout << "After removing " << element << ", intList: " << endl;
		intList.print();

		cout << endl << "Enter int to search: ";
		cin >> element;
		cout << endl;

		if (intList.seqSearch(element) != -1)
			cout << element << " is found in intList." << endl;
		else
			cout << element << " is not in intList." << endl;
	}

	if (choice != 1 && choice != 2)
	{
		cout << "Invalid input." << endl;
	}

	return 0;
}