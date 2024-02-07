// High Interest Savings header file
#ifndef HIGHINTERESTSAVINGS_H
#define HIGHINTERESTSAVINGS_H

#include "savingsAccount.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class highInterestSavings : public savingsAccount {

	public:
		// constructor
		highInterestSavings(string name, int accountNum, double initialBal) : savingsAccount(name, accountNum, initialBal) {
			u_minBalance = 5000.00;
		}
		// destructor
		~highInterestSavings() {}

        void withdraw(double amount) {
            if (u_balance - amount < 0)
            {
                cout << "Declined: Insufficient funds remain to withdraw the amount entered" << endl;
                return;
            }

            if (u_balance - amount < u_minBalance)
            {
                cout << "Declined: Minimum balance requirement prohibits withdrawal" << endl;
                return;
            }

            u_balance -= amount;
        }

        void printSummary() {
            // Use the root base class to print common info
            bankAccount::printSummary();
            cout << "\tInterest rate  : " << u_interestRate << "%" << endl;
            cout << "\tMinimum Balance: $" << u_minBalance << endl << endl;
            cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
        }

	protected:
		double u_minBalance;

};

#endif // !HIGHINTERESTSAVINGS_H

