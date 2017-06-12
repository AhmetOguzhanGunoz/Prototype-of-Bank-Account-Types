#include <iostream>
#include <string>
#include "savingsAccount.h"
#include <iomanip>

using namespace std;

const double savingsAccount::INTEREST_RATE = 0.03;

savingsAccount::savingsAccount(string n, int acctNumber, double bal):bankAccount(n,acctNumber,bal)
{
	interestRate = INTEREST_RATE;
}

savingsAccount::savingsAccount(string n, int acctNumber, double bal, double intRate):bankAccount(n,acctNumber,bal)
{
	interestRate = intRate;
}

double savingsAccount::getInterestRate()
{
	return interestRate;
}

void savingsAccount::setInterestRate(double rate)
{
	interestRate = rate;
}

void savingsAccount::postInterest()
{
	double money;

	money = balance * interestRate;

	balance += money;

}

void savingsAccount::createMonthlyStatement()
{
	postInterest();
}

void savingsAccount::print()
{
	cout.setf(ios::fixed);
	cout << "Savings Account:            " << name <<  "      ACCT # " << accountNumber << "     Balance: $" << balance;
}



