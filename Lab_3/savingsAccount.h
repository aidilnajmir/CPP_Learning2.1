// Savings Account header file
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "bankAccount.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class savingsAccount : public bankAccount {

	public:
		// constructor
		savingsAccount(string name, int accountNum, double initialBal) : bankAccount(name, accountNum, initialBal) {
			u_interestRate = 3.99;
		}
		// destructor
		~savingsAccount() {}

		void withdraw(double amount) {
			if (u_balance - amount < 0)
			{
				cout << "Declined: Insufficient funds remain to withdraw the amount entered" << endl;
				return;
			}
			u_balance -= amount;
		}

		void printSummary()
		{
			// Use the root base class to print common info
			bankAccount::printSummary();
			cout << "\tInterest rate: " << u_interestRate << "%" << endl << endl;
			cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
		}

		void printStatement()
		{
			printSummary();
			cout << "\tA full implementation would also print a Savings Account Statement here." << endl;
		}

	protected:
		
		double u_interestRate;

};

#endif // !SAVINGSACCOUNT_H