#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount(double initialBalance, double rate ): Account(initialBalance){
	// your code
	if (rate < 0.0){
		setInterestRate(0.0);
	}else{
		setInterestRate(rate);
	}
}

void SavingsAccount::setInterestRate(double r){
	interestRate = r;
}

double SavingsAccount::getInterestRate() const{
	return interestRate;
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
