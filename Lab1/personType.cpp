#include "personType.h"
#include <iostream>
#include <string>

using namespace std;

// member function definitions
void personType::print() const {
	cout << endl << "Full Name: " << firstName << " " << lastName << endl;
}

void personType::setName(string first, string last) {
	firstName = first;
	lastName = last;
}

string personType::getFirstName() const {
	return firstName;
}

string personType::getLastName() const {
	return lastName;
}

personType::personType(string first, string last) {
	firstName = first;
	lastName = last;
}
