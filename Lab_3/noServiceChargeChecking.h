// No Service Charge Checking header file
#ifndef NOSERVICECHARGECHECKING_H
#define NOSERVICECHARGECHECKING_H

#include "checkingAccount.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class noServiceChargeChecking : public checkingAccount {

	public:
		// constructor
		noServiceChargeChecking(string name, int accountNum, double initialBal) : checkingAccount(name, accountNum, initialBal) {}
		// destructor
		~noServiceChargeChecking() {}

		void writeCheck(double amount) {
			if (u_balance - amount < 0) {
				cout << "Declined: Insufficient funds remain to withdraw the amount entered" << endl;
				return;
			}
			u_balance -= amount;
		}

		void printSummary() {
			// Use the root base class to print common info
			bankAccount::printSummary();
			cout << "\tInterest rate  : " << u_interestRate << "%" << endl;
			cout << "\tMinimum Balance: $" << u_minBalance << endl;
			cout << "\tUnlimited checks   " << endl;
			cout << "\tNo monthly service fee   " << endl;
			cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
		}

};

#endif // !NOSERVICECHARGECHECKING_H