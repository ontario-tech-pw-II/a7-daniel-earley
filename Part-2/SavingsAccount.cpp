#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(double initialBalance, double rate ): Account(initialBalance){
	// your code
	if (rate < 0.0){
		interestRate = 0.0;
	}else{
		interestRate = rate;
	}
}

double SavingsAccount::calculateInterest() {
	// your code
	double Interest = 0;
	Interest = getBalance() * interestRate;
	return Interest;
	
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	os << "Account Type: Savings" << endl;
	os << "Balance: $" << getBalance() << endl;
	os << "Interest Rate: " << interestRate << endl; 
}
