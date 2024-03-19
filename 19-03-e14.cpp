#include <iostream>

template<typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = maximum(3, 4);
    double doubleMax = maximum(3.5, 4.5);

    std::cout << "Maximum of integers: " << intMax << std::endl;
    std::cout << "Maximum of doubles: " << doubleMax << std::endl;

    return 0;
}

