// Certificate Of Deposit header file
#ifndef CERTIFICATEOFDEPOSIT_H
#define CERTIFICATEOFDEPOSIT_H

#include "bankAccount.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class certificateOfDeposit : public bankAccount {
	
	public:
		// constructor
		certificateOfDeposit(string name, int accountNum, double initialBal, int matMon) : bankAccount(name, accountNum, initialBal) {
			u_maturityMonths = matMon;
			u_currentMonth = 1;
			u_interestRate = 4.75;
		}
		// destructor
		~certificateOfDeposit() {}

		void withdraw(double amount) {
			if (u_balance - amount < 0) {
				cout << "Declined: Insufficient funds remain to withdraw the amount entered" << endl;
				return;
			}
			u_balance -= amount;
		}

		void printSummary()
		{
			// Use the root base class to print common info
			bankAccount::printSummary();
			cout << "\tInterest rate  : " << u_interestRate << "%" << endl;
			cout << "\tMaturity Months: " << u_maturityMonths << endl;
			cout << "\tCurrent Month  : " << u_currentMonth << endl;
			cout << endl << setw(60) << setfill('-') << "" << setfill(' ') << endl;
		}

		void printStatement() {
			void printSummary();
			cout << "A full implementation would also print a Certificate of Deposit Account Statement here." << endl;
		}

	private:
		int u_maturityMonths;
		int u_currentMonth;
		double u_interestRate;
};

#endif // !CERTIFICATEOFDEPOSIT_H
