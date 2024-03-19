#include <iostream>

class BankAccount {
protected:
    double balance;
public:
    virtual void withdraw(double amount) = 0; // Pure virtual function
};

class SavingsAccount : public BankAccount {
public:
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful from Savings Account." << std::endl;
        } else {
            std::cout << "Insufficient funds in Savings Account." << std::endl;
        }
    }
};

class CurrentAccount : public BankAccount {
public:
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful from Current Account." << std::endl;
        } else {
            std::cout << "Insufficient funds in Current Account." << std::endl;
        }
    }
};

int main() {
    SavingsAccount savings;
    CurrentAccount current;
    
    savings.withdraw(50);
    current.withdraw(100);

    return 0;
}

