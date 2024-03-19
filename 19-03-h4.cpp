#include <iostream>
#include <stdexcept>

class BankAccount {
private:
    std::string accountNumber;
    double balance;
public:
    BankAccount(const std::string& accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    void withdraw(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Invalid withdrawal amount.");
        }
        if (amount > balance) {
            throw std::runtime_error("Insufficient balance.");
        }
        // Additional checks if necessary

        balance -= amount;
        std::cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount account("123456", 1000);

    try {
        account.withdraw(500);
        account.withdraw(700); // Should throw an exception due to insufficient balance
    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return 0;
}

