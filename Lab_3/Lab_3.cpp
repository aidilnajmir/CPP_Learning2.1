// File: Lab_3.cpp

// Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 02/08/2022

// Date of Working Version of this Program: 02/09/2022


//Account (main function) implementation file

#include <iostream>
#include <iomanip>
#include <string>
#include "certificateOfDeposit.h"       //including certificateOfDeposit
#include "highInterestChecking.h"       //including highInterestChecking
#include "highInterestSavings.h"       //including highInterestSavings
#include "serviceChargeChecking.h"       //including serviceChargeChecking

using namespace std;

void CheckingWithService()
{
	//acct object of serviceChargeChecking, values of data member is passed as argument of constructor
	serviceChargeChecking acct("Aidil Najmir", 1234, 13000);
	char input = 0;
	double amount;

	cout << "\tChecking with Service Charge" << endl << endl;
	cout << "Current account overview:" << endl;
	//printing the account summary
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "5 - Write a check" << endl;
		cout << "x - Exit" << endl;
		cout << "Enter choice: ";
		//entering the choice
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case '5':
			cout << "Enter amount: ";
			cin >> amount;
			acct.writeCheck(amount);
			break;
		case '6':
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		//after choosing valid choice again printing the account summary
		acct.printSummary();
		cout << endl;
	}
}
//same as above
void CheckingNoService()
{

	//acct is object of noServiceChargeChecking,values of data member is passed as argument of constructor
	noServiceChargeChecking acct("Aidil Najmir", 1234, 13000);
	char input = 0;
	double amount;
	cout << "\tChecking without Service Charge" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "5 - Write a check" << endl;
		cout << "x - Exit" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case '5':
			cout << "Enter amount: ";
			cin >> amount;
			acct.writeCheck(amount);
			break;
		case '6':
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}
//same as above
void CheckingHighInterest()
{
	//acct is object of highInterestChecking,values of data member is passed as argument of constructor
	highInterestChecking acct("Aidil Najmir", 1234, 13000);
	char input = 0;
	double amount;
	cout << "\tChecking with High Interest" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "5 - Write a check" << endl;
		cout << "x - Exit" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case '5':
			cout << "Enter amount: ";
			cin >> amount;
			acct.writeCheck(amount);
			break;
		case '6':
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}
//same as above
void Savings()
{
	//acct is object of savingsAccount,values of data member is passed as argument of constructor
	savingsAccount acct("Aidil Najmir", 1234, 13000);
	char input = 0;
	double amount;
	cout << "\tRegular Savings" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "x - Exit" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}
//same as above
void SavingsHighInterest()
{
	//acct is object of highInterestSavings,values of data member is passed as argument of constructor
	highInterestSavings acct("Aidil Najmir", 1234, 13000);
	char input = 0;
	double amount;
	cout << "\tHigh Interest Savings" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "x - Exit" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}
//same as above
void CertificateOfDeposit()
{
	//acct is object of certificateOfDeposit,values of data member is passed as argument of constructor
	certificateOfDeposit acct("Aidil Najmir", 1234, 13000, 6);
	char input = 0;
	double amount;
	cout << "\tHigh Interest Savings" << endl << endl;
	cout << "Current account overview:" << endl;
	acct.printSummary();
	cout << endl;
	while (input != 'x')
	{
		cout << "Select a transaction:" << endl;
		cout << "1 - Make a Withdrawal" << endl;
		cout << "2 - Make a Deposit" << endl;
		cout << "3 - Print Summary" << endl;
		cout << "4 - Print Monthly Statement" << endl;
		cout << "x - Exit" << endl;
		cout << "Enter choice: ";
		cin >> input;
		switch (input)
		{
		case '1':
			cout << "Enter amount: ";
			cin >> amount;
			acct.withdraw(amount);
			break;
		case '2':
			cout << "Enter amount: ";
			cin >> amount;
			acct.deposit(amount);
			break;
		case '3':
			acct.printSummary();
			break;
		case '4':
			acct.printStatement();
			break;
		case 'x':
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
		acct.printSummary();
		cout << endl;
	}
}
int main()
{
	char input;
	cout << "\tHello, welcome to Maybank!" << endl << endl;
	cout << "Choose account type:" << endl;
	cout << "1 - Checking with Service Charge" << endl;
	cout << "2 - Checking without Service Charge" << endl;
	cout << "3 - Checking with High Interest" << endl;
	cout << "4 - Savings" << endl;
	cout << "5 - Savings with High Interest" << endl;
	cout << "6 - Certificate of Deposit" << endl;
	cout << "Enter choice: ";
	//entering the choice
	cin >> input;
	switch (input)
	{
	case '1':
		//Checking with Service Charge
		CheckingWithService();
		break;
	case '2':
		//Checking without Service Charge
		CheckingNoService();
		break;
	case '3':
		//Checking with High Interest
		CheckingHighInterest();
		break;
	case '4':
		//Savings account
		Savings();
		break;
	case '5':
		//Savings with High Interest
		SavingsHighInterest();
		break;
	case '6':
		//Certificate of Deposit
		CertificateOfDeposit();
		break;
	default:
		cout << "Invalid choice" << endl;
		break;
	}
}