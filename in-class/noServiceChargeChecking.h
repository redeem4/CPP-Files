#ifndef NOSERVICECHARGECHECKING_H_INCLUDED
#define NOSERVICECHARGECHECKING_H_INCLUDED
#include "checkingAccount.h"

class noServiceChargeChecking : public checkingAccount {
public:
    void payInterest();
private:
    double interest;
    double minimumBalance;
};

#endif // NOSERVICECHARGECHECKING_H_INCLUDED
