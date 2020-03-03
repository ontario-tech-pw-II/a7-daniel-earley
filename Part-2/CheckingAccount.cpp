#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	// your code
	if (transactionFee <= 0){
		transactionFee = 0;
	}else{
		transactionFee = fee;
	}
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	// your code
	Account::credit(amount);
	chargeFee();
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	// your code
	if (getBalance() > amount + transactionFee){
		setBalance(getBalance() - amount);
		chargeFee();
		return true;
	}else{
		return false;
	}
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	// your code
	double b = getBalance();
	setBalance(b - transactionFee);

}

void CheckingAccount::display(ostream & os) const
{
	// your code
	os << "Checking Account:" << endl;
	os << "Balance: $" << getBalance() << endl;
	os << "Transaction Fee: $" << transactionFee << endl;
}
