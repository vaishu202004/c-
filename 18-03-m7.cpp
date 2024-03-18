#include <iostream>
#include <string>

class BankAccount {
protected:
    std::string accountNumber;
    double balance;
public:
    BankAccount(const std::string& accNum, double bal) : accountNumber(accNum), balance(bal) {}
    
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited " << amount << " into account " << accountNumber << std::endl;
    }
    
    virtual void withdraw(double amount) = 0;
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(const std::string& accNum, double bal) : BankAccount(accNum, bal) {}
    
    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " from savings account " << accountNumber << std::endl;
        } else {
            std::cout << "Insufficient funds in savings account " << accountNumber << std::endl;
        }
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(const std::string& accNum, double bal) : BankAccount(accNum, bal) {}
    
    void withdraw(double amount) override {
        if (balance - amount >= -1000) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " from current account " << accountNumber << std::endl;
        } else {
            std::cout << "Overdraft limit exceeded for current account " << accountNumber << std::endl;
        }
    }
};

int main() {
    SavingsAccount savings("SA123", 1000);
    CurrentAccount current("CA456", 2000);
    
    savings.deposit(500);
    savings.withdraw(200);
    
    current.deposit(1000);
    current.withdraw(2500);
    
    return 0;
}

