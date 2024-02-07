// File: Lab6_queue.cpp

// Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 03/15/2022

// Date of Working Version of this Program: 03/15/2022




// main function
#include "queueType.h"
#include <iostream>

using  namespace std;

int main()

{
	queueType<int> myQueue(100);
	int n;

	for (int i = 1; i < 10; i++)
		myQueue.addQueue(i);

	cout << "The elements in the queue were: ";

	myQueue.print();

	cout << endl << "Enter element's position to move: ";
	cin >> n;

	myQueue.moveNthFront(n);

	cout <<"The elements in the queue after move were: ";
	myQueue.print();

	cout << endl;

	system("pause");

	return 0;

}