#include <iostream>

class BankAccount {
protected:
    int accountNumber;
    double balance;
public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    virtual void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited " << amount << " into account " << accountNumber << std::endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " from account " << accountNumber << std::endl;
        } else {
            std::cout << "Insufficient balance" << std::endl;
        }
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(int accNum, double bal) : BankAccount(accNum, bal) {}
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(int accNum, double bal) : BankAccount(accNum, bal) {}
};

int main() {
    SavingsAccount savings(123456, 1000);
    savings.deposit(500);
    savings.withdraw(2000);
    savings.withdraw(500);

    CurrentAccount current(654321, 2000);
    current.deposit(1000);
    current.withdraw(3000);

    return 0;
}

