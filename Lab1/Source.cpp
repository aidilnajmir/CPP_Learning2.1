#include "personType.h"
#include <iostream>
#include <string>

using namespace std;

// main function
int main() {
	personType person1, person2;
	string first, last;

	// person 1
	cout << "Person 1" << endl << "..................................................." << endl;
	person1.setName("Mohamad Aidil Najmir", "Bin Mohamad Sobri");	// set the first name and last name
	cout << "First Name: " << person1.getFirstName() << endl;	// get person's first name
	cout << "Last Name: " << person1.getLastName() << endl;		// get person's last name
	person1.print();	// print the person's full name

	
	// person 2
	cout << endl << "Person 2" << endl << "..................................................." << endl;
	person2.setName("Logan", "Smith");
	cout << "First Name: " << person2.getFirstName() << endl;
	cout << "Last Name: " << person2.getLastName() << endl;
	person2.print();
}
