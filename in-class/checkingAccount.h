#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
#define "bankAccount.h"
class checkingAccount : public bankAccount {
public:
    virtual void writeCheck() = 0;
    virtual double getInterest();
    virtual bool isServiceCharge();
private:
    const bool monthlyServiceCharge = false;
    double interest;
};


#endif // CHECKINGACCOUNT_H_INCLUDED
