/*
==============================================
    PROGRAM: Simple Bank Account Management System
    AIM: To perform basic banking operations like deposit, withdraw, and check balance.
    DEVELOPER:vishwa padaliya
    LAST UPDATED: March 12, 2025
==============================================
*/

#include <iostream>
using namespace std;

class BankAccount
{
public:
    string holder_name;
    int account_number, balance;

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount < balance)
        {
            balance -= amount;
        }
        else if (amount > balance)
        {
            cout << "Not enough balance!" << endl;
        }
    }

    void display_balance()
    {
        cout << "Current Balance: " << balance;
    }
};

int main()
{
    BankAccount b1;
    b1.balance = 10000;
    int amount;
    int choice;

    cout << "Enter your name: ";
    cin >> b1.holder_name;
    cout << "Enter your account number: ";
    cin >> b1.account_number;

    cout << "Enter 1 For DEPOSIT" << endl
         << "Enter 2 For WITHDRAW" << endl
         << "Enter 3 For CHECKING CURRENT BALANCE" << endl
         << "Enter 4 For EXIT" << endl;

    do
    {
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount for Deposit: ";
            cin >> amount;
            b1.deposit(amount);
            break;
        case 2:
            cout << "Enter amount for Withdraw: ";
            cin >> amount;
            b1.withdraw(amount);
            break;
        case 3:
            b1.display_balance();
            break;
        case 4:
            cout << "\nThank you!" << endl;
            break;
        default:
            cout << "Enter valid choice!" << endl;
        }
    } while (choice != 4);

    cout << "\nName: vishwa padaliya" << endl
         << "ID: 24CE068";
    return 0;
}
