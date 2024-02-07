// File: Lab_2.cpp

// Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 02/01/2022

// Date of Working Version of this Program: 02/01/2022

#include <iostream>

using namespace std;

int main() {

    int* p; int* q; int i;

    p = new int[5]; p[0] = 5;

    for (i = 1; i < 5; i++)

        p[i] = p[i - 1] + 2 * i;

    cout << "Array p: ";

    for (i = 0; i < 5; i++)

        cout << p[i] << " ";

    cout << endl;

    q = new int[5];

    for (i = 0; i < 5; i++)

        q[i] = p[4 - i];

    cout << "Array q: ";

    for (i = 0; i < 5; i++)

        cout << q[i] << " ";

    cout << endl;

    delete[] p;

    delete[] q;

    return 0;

}