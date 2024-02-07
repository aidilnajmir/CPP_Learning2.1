// Bank Account header file
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class bankAccount {
	
	public:
		// constructor
		bankAccount(string name, int accountNum, double initialBal) {
			u_name = name;
			u_accountNum = accountNum;
			u_balance = initialBal;
		}
		// destructor
		~bankAccount() {}
		
		string getName() {
			return u_name;
		}

		int getAccountNum() {
			return u_accountNum;
		}

		double getBalance() {
			return u_balance;
		}

		void deposit(double amount) {
			u_balance += amount;
			cout << "$" << amount << " has been deposited to your account." << endl;
		}

		virtual void withdraw(double amount) = 0;

		virtual void printStatement() = 0;

		virtual void printSummary() {
			cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
			cout << endl << "" << "\t\tAccount Summary" << endl << endl;
			cout << "\tName           : " << u_name << endl;
			cout << "\tAccount Number : " << u_accountNum << endl;
			cout << "\tCurrent Balance: $" << u_balance << endl << endl;
		}

	protected:

		string u_name;
		int u_accountNum;
		double u_balance;

};

#endif // !BANKACCOUNT_H