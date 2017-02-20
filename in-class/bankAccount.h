#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

class bankAccount {
public:
    bankAccount(string owner = "", int accountNum = 0, double balance = 0)
    int getAccountNum();
    string getOwner();
    double getBalance();
    void setName(string owner);
    void makeDeposits(double amount);
    virtual withdrawMoney(double amount);
    virtual createMonthlyStatment() = 0;
    virtual void print();
private:
    int accountNum;
    string owner;
    double balance;
};

#endif // BANKACCOUNT_H_INCLUDED
