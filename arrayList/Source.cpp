#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main() {

	int choice;

	cout << "Choose array list elements type: " << endl;
	cout << "1. float" << endl;
	cout << "2. int" << endl;

	cin >> choice;

	if (choice == 1)
	{
		int size;
		unorderedArrayListType floatList(25);

		float element;

		cout << "Enter list size:";
		cin >> size;
		cout << endl << "Enter " << size << " elements:" << endl;

		for (int i = 0; i < size; i++)
		{
			cin >> element;
			floatList.insertEnd(element);
		}
		cout << endl;

		cout << "floatList: ";
		cout << (cout, floatList);
		cout << endl;
	}

	if (choice == 2)
	{
		int size;
		unorderedArrayListType intList(25);

		int element;

		cout << "Enter list size:";
		cin >> size;
		cout << endl << "Enter " << size << " elements:" << endl;

		for (int i = 0; i < size; i++)
		{
			cin >> element;
			intList.insertEnd(element);
		}
		cout << endl;

		cout << "intList: ";
		cout << (cout, intList);
		cout << endl;
	}
	if (choice != 1 && choice != 2)
	{
		cout << "Invalid input." << endl;
	}

	return 0;
}
