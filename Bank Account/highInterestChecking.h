#ifndef H_highInterestChecking
#define H_highInterestChecking

#include <iostream>
#include <string>
#include "noServiceChargeChecking.h"

using namespace std;

class highInterestChecking: public noServiceChargeChecking
{
private:
	static const double INTEREST_RATE;
	 highInterestChecking(string n, int acctNumber, double bal, double minBal, double intRate);
	 double getInterestRate();
	 void setInterestRate(double intRate);
	 void postInterest();
	 void createMonthlyStatement();
};

#endif