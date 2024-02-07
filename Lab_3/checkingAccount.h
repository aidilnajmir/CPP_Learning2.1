// Checking Account Header File 
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "bankAccount.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class checkingAccount : public bankAccount {

	public: 
		// constructor
		checkingAccount(string name, int accountNum, double initialBal) : bankAccount(name, accountNum, initialBal) {}
		//destructor
		~checkingAccount() {}
		
		virtual void writeCheck(double amount) = 0;

		void withdraw(double amount) {
			if (u_balance - amount < 0) {
				cout << "Declined: Insufficient funds remain to withdraw the amount entered" << endl;
				return;
			}
			if (u_balance - amount < u_minBalance) {
				cout << "Declined: Minimum balance requirement prohibits withdrawal" << endl;
				return;
			}
			u_balance -= amount;
		}

		void printStatement() {
			printSummary();
			cout << "A full implementation would also print a Certificate of Deposit Account Statement here." << endl;
		}

	protected:

		double u_interestRate = 0;
		int u_checksRemain = 0;
		double u_minBalance = 0;

};

#endif // !CHECKINGACCOUNT_H