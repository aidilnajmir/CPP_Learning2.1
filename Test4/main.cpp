#include "unorderedSet.h"

#include <iostream>

using namespace std;

int main()

{

    int intArr[] = { 12,23,4,7,12,9,10,56,23,11 };

    string strArr[] = { "banana","apple","pear","grape","banana","fig","mango","orange","pear","guava" };

    unorderedSet<int> intSet(20);

    for (int i = 0; i < 10; i++)

        intSet.insertEnd(intArr[i]);

    unorderedSet<string> strSet(20);

    for (int i = 0; i < 10; i++)

        strSet.insertEnd(strArr[i]);

    cout << "\nInteger Set : " << intSet << endl;

    cout << "String Set : " << strSet << endl;

    intSet.insertAt(5, 30);

    cout << "\nInsert At non-duplicate\nInteger Set : " << intSet << endl;

    intSet.insertAt(5, 11);

    cout << "Insert At duplicate\nInteger Set : " << intSet << endl;

    strSet.replaceAt(1, "pineapple");

    cout << "\nReplace At non-duplicate\nString Set : " << strSet << endl;

    strSet.replaceAt(3, "pear");

    cout << "Replace At Duplicate\nString Set : " << strSet << endl;

    int intArr1[] = { 7,0,19,56,22,11,23,5 };

    string strArr1[] = { "red","yellow","grape","banana","mango","orange","guava" };

    unorderedSet<int> intSet1(20);

    for (int i = 0; i < 8; i++)

        intSet1.insertEnd(intArr1[i]);

    unorderedSet<string> strSet1(20);

    for (int i = 0; i < 7; i++)

        strSet1.insertEnd(strArr1[i]);

    unorderedSet<int>unionIntSet = intSet + intSet1;

    cout << "\nInt Set1 :" << endl << intSet << endl;

    cout << "Int Set2 :" << endl << intSet1 << endl;

    cout << "Union Int Set : " << endl;

    cout << unionIntSet << endl;

    unorderedSet<int>intersectIntSet = intSet - intSet1;

    cout << "Intersection Int Set : " << endl;

    cout << intersectIntSet << endl;

    cout << "\nString Set1 :" << endl << strSet << endl;

    cout << "String Set2 :" << endl << strSet1 << endl;

    unorderedSet<string> unionStrSet = strSet + strSet1;

    unorderedSet<string> intersectStrSet = strSet - strSet1;

    cout << "Union String Set : " << endl;

    cout << unionStrSet << endl;

    cout << "Intersection String Set : " << endl;

    cout << intersectStrSet << endl;

    return 0;

}
