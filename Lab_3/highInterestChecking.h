// High Interest Checking header file
#ifndef HIGHINTERESTCHECKING_H
#define HIGHINTERESTCHECKING_H

#include "noServiceChargeChecking.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class highInterestChecking : public noServiceChargeChecking {

	public: 
		// constructor
		highInterestChecking (string name, int accountNum, double initialBal) : noServiceChargeChecking(name, accountNum, initialBal) {
			// The only difference between the base class noServiceChargeChecking
			// is the values of interest and minimum balance.

			u_interestRate = 5.0; // Higher interest rate
			u_checksRemain = -1; // -1 indicates no limit
			u_minBalance = 1000; // Minimum balance
		}
		// destructor
		~highInterestChecking() {}

};
#endif // !HIGHINTERESTCHECKING_H

