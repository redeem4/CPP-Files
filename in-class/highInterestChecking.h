#ifndef HIGHINTERESTCHECKING_H_INCLUDED
#define HIGHINTERESTCHECKING_H_INCLUDED
#include "noServiceChargeChecking.h"

class highInterestChecking : public noServiceChargeChecking {
public:
    void payInterest();
private:
    double interest;
    double minimumBalance;
};

#endif // HIGHINTERESTCHECKING_H_INCLUDED
