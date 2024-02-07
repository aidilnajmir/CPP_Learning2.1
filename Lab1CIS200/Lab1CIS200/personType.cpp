// File: personType.cpp

// Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 01/26/2022

// Date of Working Version of this Program: 01/26/2022

#include <iostream>
#include <string>

using namespace std;

// class definition
class personType {
	// public members
	public:
		void print() const;
		void setName(string, string);
		string getFirstName() const;
		string getLastName() const;
		personType(string first = "", string last = "");	//constructor

	// private members
	private:
		string firstName;
		string lastName;
};

// member function definitions
void personType::print() const {
	cout << "Full Name: " << firstName << " " << lastName << endl;
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
// end of member function definition

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