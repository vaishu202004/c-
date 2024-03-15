#include <iostream>

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    Number operator-() {
        return Number(-value);
    }

    int getValue() {
        return value;
    }
};

int main() {
    Number num(5);
    Number negated = -num;

    std::cout << "Original value: " << num.getValue() << std::endl;
    std::cout << "Negated value: " << negated.getValue() << std::endl;

    return 0;
}

