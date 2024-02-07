// File: mainLab7.cpp

// Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 03/22/2022

// Date of Working Version of this Program: 03/22/2022



// mainLab7.cpp

#include <iostream>
#include "listFunc.cpp"

using namespace std;

int main()
{
	int list1[5000];
	int list2[5000];
	int list3[5000];

	int compBubbleSort = 0, compSelectionSort = 0, compInsertionSort = 0;
	int assignBubbleSort = 0, assignSelectionSort = 0, assignInsertionSort = 0;

	fillArray(list1, 5000);
	copyArray(list1, list2, 5000);
	copyArray(list1, list3, 5000);

	bubbleSort(list1, 5000, compBubbleSort, assignBubbleSort);
	selectionSort(list2, 5000, compSelectionSort, assignSelectionSort);
	insertionSort(list3, 5000, compInsertionSort, assignInsertionSort);

	cout << "Number of comparisons" << endl;
	cout << " Bubble sort: " << compBubbleSort << endl;
	cout << " Selection sort: " << compSelectionSort << endl;
	cout << " Insertion sort: " << compInsertionSort << endl << endl;

	cout << "Number of item assignments" << endl;
	cout << " Bubble sort: " << assignBubbleSort << endl;
	cout << " Selection sort: " << assignSelectionSort << endl;
	cout << " Insertion sort: " << assignInsertionSort << endl;


	return 0;
}