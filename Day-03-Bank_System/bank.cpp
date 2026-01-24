#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayStatus() {
        cout << "--- Account Status ---" << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    cout << "Day 3: Bank System Started..." << endl;
    
    BankAccount myAccount("Student User", 500.0);
    
    myAccount.displayStatus();
    myAccount.deposit(150.0);
    myAccount.withdraw(200.0);
    myAccount.displayStatus();

    return 0;
}