#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"
#include <iostream>

class SavingsAccount : public Account{
    private:
        double interestRate;

    protected:
        void setInterestRate(double);
        double getInterestRate() const;
        

        public:
            SavingsAccount(){}
            SavingsAccount (double = 0.0, double = 0.0);
            double calculateInterest();
            void display(ostream &) const; 
};

#endif