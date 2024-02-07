// listFunc.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

inline void fillArray(int list[], int length)
{
	srand(time(0));

	for (int i = 0; i < length; i++)
		list[i] = rand() % 20000;
}

inline void copyArray(int list1[], int list2[], int length)
{
	for (int i = 0; i < length; i++)
		list2[i] = list1[i];
}

inline void bubbleSort(int list[], int length, int& comp, int& assign)
{
	// write a function using bubble sort to sort the provided array
	// assign "comp" to the number of comparisons required
	// assign "assign" to the number of item assignments

	// initialize comp and assign to 0
	comp = 0;
	assign = 0;
	int i, j;
	for (i = 0; i < length - 1; i++) {
		// Last i elements are already in place
		for (j = 0; j < length - i - 1; j++) {
			// increment comp for the comparison b/w list[j] and list[j+1]
			comp++;
			if (list[j] > list[j + 1]) {
				int t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				// increment assign by 3 for swapping list[j] and list[j+1]
				assign += 3;
			}
		}
	}
}

inline void selectionSort(int list[], int length, int& comp, int& assign)
{
	// write a function using selection sort to sort the provided array
	// assign "comp" to the number of comparisons required
	// assign "assign" to the number of item assignments

	// initialize comp and assign to 0
	assign = 0, comp = 0;
	int i, j, min_i;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < length - 1; i++)
	{
		// Find the minimum element in unsorted array
		min_i = i;
		for (j = i + 1; j < length; j++) {
			// increment comp for the comparison b/w list[j] and list[min_i]
			comp++;
			if (list[j] < list[min_i])
				min_i = j;
		}

		// Swap the found minimum element with the first element
		int t = list[min_i];
		list[min_i] = list[i];
		list[i] = t;
		// increment assign by 3 for swapping list[min_i] and list[i]
		assign += 3;
	}
}

inline void insertionSort(int list[], int length, int& comp, int& assign)
{
	// write a function using insertion sort to sort the provided array
	// assign "comp" to the number of comparisons required
	// assign "assign" to the number of item assignments

	// initialize comp and assign to 0
	comp = 0;
	assign = 0;
	int i, key, j;
	for (i = 1; i < length; i++)
	{
		key = list[i];
		// increment assign by 1 since the value of list[i] is copied to key
		assign++;
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && list[j] > key) {
			// increment comp for the while condition
			comp += 1;
			list[j + 1] = list[j];
			assign++;
			j = j - 1;
		}
		comp++; // again increment comp when the while loop is exited
		// increment assign by 1 since the value of key is copied to list[j+1]
		assign++;
		list[j + 1] = key;
	}
}