#ifndef PERSONTYPE_H
#define PERSONTYPE_H

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
		personType(string first = "", string last = "");	// constructor
	
	// private members
	private:
		string firstName;
		string lastName;
};
#endif
