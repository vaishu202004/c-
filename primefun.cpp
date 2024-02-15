#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << num << (isPrime(num) ? " is" : " is not") << " a prime number." << std::endl;
    return 0;
}

