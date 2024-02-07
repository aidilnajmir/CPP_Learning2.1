// Service Charge Checking header file
#ifndef SERVICECHARGECHECKING_H
#define SERVICECHARGECHECKING_H

#include "checkingAccount.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_CHECKS = 5;
const double SVC_CHARGE = 10.0;

class serviceChargeChecking : public checkingAccount {

	public:
		// constructor
		serviceChargeChecking(string name, int accountNum, double initialBal) : checkingAccount(name, accountNum, initialBal) {
			u_interestRate = 0; // No interest rate
			u_checksRemain = MAX_CHECKS; // Limit of 5 checks
			u_minBalance = 0; // No minimum balance
		}
		//destructor
		~serviceChargeChecking() {}

        void writeCheck(double amount)
        {
            if (u_checksRemain == 0)
            {
                cout << "Declined: No more checks remaining this month" << endl;
                return;
            }

            if (u_balance - amount < 0)
            {
                cout << "Declined: Insufficient funds remain to withdraw the amount entered" << endl;
                return;
            }

            u_checksRemain--;
            u_balance -= amount; // Assume check is cashed immediately...

        }

        void printSummary()
        {
            // Use the root base class to print common info
            bankAccount::printSummary();
            cout << "\tChecks remaining   : " << u_checksRemain << endl;
            cout << "\tMonthly service fee: $" << SVC_CHARGE << endl;
            cout << "\tNo interest " << endl;
            cout << "\tNo Minimum Balance " << endl;
            cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
        }
};

#endif // !SERVICECHARGECHECKING_H

