#ifndef SERVICECHARGECHECKING_H_INCLUDED
#define SERVICECHARGECHECKING_H_INCLUDED
#include "checkingAccount.h"

class serviceChargeChecking : public checkingAccount {
public:

private:
    const int checkLimit = 4;
    bool minimumBalance = false;
};

#endif // SERVICECHARGECHECKING_H_INCLUDED
