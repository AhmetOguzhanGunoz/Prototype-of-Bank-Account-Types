#include <iostream>
#include <string>
#include "bankAccount.h"

using namespace std;

bankAccount::bankAccount(string n, int acctNumber, double bal)
{
	name = n;
	accountNumber = acctNumber;
	balance = bal;
}

int bankAccount::getAccountNumber()
{
	return accountNumber;
}

double bankAccount::getBalance()
{
	return balance;
}

string bankAccount::getName()
{
	return name;
}

void bankAccount::setName(string n)
{
	name = n;
}

void bankAccount::withdraw(double amount)
{
	if(amount <= 0)
		cout << "Enter a valid value" << endl;
	else
		balance -= amount;
}

void bankAccount::deposit(double amount)
{
	if(amount <= 0)
		cout << "Enter a valid value" << endl;
	else
		balance += amount;
}

void bankAccount::print()
{
	cout << "" << name << "ACCT # " << accountNumber << "Balance: $" << balance;
}