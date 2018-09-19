#ifndef _SAVINGS_ACCOUNT_
#define _SAVINGS_ACCOUNT_
#include "Account.h"

class Savings_Account: public Account {
public:
    double interest_rate;
    
    Savings_Account();
    ~Savings_Account();
    
    void deposit(double amount);
    void withdraw(double amount);    
};

#endif // _SAVINGS_ACCOUNT_