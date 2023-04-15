#include <iostream>

using namespace std;

class Bank
{
protected:
    int accNum;
    int ebalance;
    int deposite;

public:
    void acc_Num()
    {
        cin >> accNum;
    }
    void getBalance()
    {
        cin >> deposite;
    }
    void balance()
    {
        cin >> ebalance;
    }
    virtual int totalbalance() = 0;
};
class BankA : public Bank
{
public:
    int totalbalance()
    {
        int total;
        total = deposite + ebalance;
        return total;
    }
};
class BankB : public Bank
{
public:
    int totalbalance()
    {
        int total;
        total = deposite + ebalance;
        return total;
    }
};
class BankC : public Bank
{
public:
    int totalbalance()
    {
        int total;
        total = deposite + ebalance;
        return total;
    }
};

int main()
{
    BankA a;
    BankB b;
    BankC c;

    cout << "====================BANK A======================" << endl;
    cout << "Enter the account number for Bank A: ";
    a.acc_Num();
    cout << "\nEnter the amount to deposite: ";
    a.getBalance();
    cout << "\nEnter the amount present before deposite: ";
    a.balance();
    cout << "\nTotal balance available in your account : " << a.totalbalance() << endl;

    cout << "====================BANK B======================" << endl;
    cout << "Enter the account number for Bank B: ";
    b.acc_Num();
    cout << "\nEnter the amount to deposite: ";
    b.getBalance();
    cout << "\nEnter the amount present before deposite: ";
    b.balance();
    cout << "\nTotal balance available in your account : " << b.totalbalance() << endl;

    cout << "====================BANK C======================" << endl;
    cout << "Enter the account number for Bank C: ";
    c.acc_Num();
    cout << "\nEnter the amount to deposite: ";
    c.getBalance();
    cout << "\nEnter the amount present before deposite: ";
    c.balance();
    cout << "\nTotal balance available in your account : " << c.totalbalance() << endl;
}