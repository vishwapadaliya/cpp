#include <iostream>
#include <string>

using namespace std;

class BankAccount {

   string holder_name;
   double acc_number;
   double balance;


public:

    BankAccount(string name, int acc_n) { //  with no initial balance
       holder_name = name;
        acc_number = acc_n;
        balance = 0.0;
    }


    BankAccount(string name, int acc_n, float b) { //  with initial balance
        holder_name = name;
        acc_number = acc_n;
        balance = b;
    }

    void depositing_money(double deposited_money)
     {
         cout << "Enter the amount for deposite: ";
      cin >> deposited_money;

      balance += deposited_money;

      cout << "Your current balance is: " << balance << endl;
    }

    void withdrawing_money(double withdraw_money) {
        cout << "Enter the amount for withdraw: ";
         cin >> withdraw_money;
        if (withdraw_money > 0 && withdraw_money <= balance)
        {
            balance -= withdraw_money;
            cout << "your current balance is: " << balance << endl<<endl;

        }
        else
        {
            cout << "you don't have sufficient amount in your account: " << endl<<endl;
        }
    }

    void displayAccount() {
        cout << "Account Holder's name: " << holder_name << endl;
        cout << "Account Number is: " << acc_number << endl;
        cout << "Current Balance is: " << balance << endl<<endl;
    }
};

int main() {
    double deposited_money, withdraw_money;

    BankAccount a1("Kairavi",25059);
    BankAccount a2("Kaushani",25001, 5000.50);

    // Performing operations
    a1.displayAccount();
    a1.depositing_money(deposited_money);
    a1.withdrawing_money(withdraw_money);
    a1.displayAccount();

    a2.displayAccount();
    a2.depositing_money(deposited_money);
    a2.withdrawing_money(withdraw_money);
    a2.displayAccount();

    return 0;
}
