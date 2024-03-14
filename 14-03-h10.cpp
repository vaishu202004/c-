#include <iostream>

// Define the Pair class
template<typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

    void setFirst(T1 newFirst) {
        first = newFirst;
    }

    void setSecond(T2 newSecond) {
        second = newSecond;
    }

private:
    T1 first;
    T2 second;
};

// Friend function to swap two Pair objects
template<typename T1, typename T2>
void swapPairs(Pair<T1, T2> &pair1, Pair<T1, T2> &pair2) {
    std::swap(pair1.first, pair2.first);
    std::swap(pair1.second, pair2.second);
}

// Template specialization to handle swapping for specific data types
template<>
void swapPairs(Pair<int, char> &pair1, Pair<int, char> &pair2) {
    std::swap(pair1.getFirst(), pair2.getFirst());
    std::swap(pair1.getSecond(), pair2.getSecond());
}

int main() {
    // Testing Pair class
    Pair<int, double> pair1(10, 3.14);
    Pair<int, double> pair2(20, 6.28);

    std::cout << "Before swapping:" << std::endl;
    std::cout << "Pair 1: (" << pair1.getFirst() << ", " << pair1.getSecond() << ")" << std::endl;
    std::cout << "Pair 2: (" << pair2.getFirst() << ", " << pair2.getSecond() << ")" << std::endl;

    // Swap pair1 and pair2
    swapPairs(pair1, pair2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "Pair 1: (" << pair1.getFirst() << ", " << pair1.getSecond() << ")" << std::endl;
    std::cout << "Pair 2: (" << pair2.getFirst() << ", " << pair2.getSecond() << ")" << std::endl;

    // Testing template specialization
    Pair<int, char> pair3(1, 'a');
    Pair<int, char> pair4(2, 'b');

    std::cout << "Before swapping (specialization):" << std::endl;
    std::cout << "Pair 3: (" << pair3.getFirst() << ", " << pair3.getSecond() << ")" << std::endl;
    std::cout << "Pair 4: (" << pair4.getFirst() << ", " << pair4.getSecond() << ")" << std::endl;

    // Swap pair3 and pair4 using specialization
    swapPairs(pair3, pair4);

    std::cout << "After swapping (specialization):" << std::endl;
    std::cout << "Pair 3: (" << pair3.getFirst() << ", " << pair3.getSecond() << ")" << std::endl;
    std::cout << "Pair 4: (" << pair4.getFirst() << ", " << pair4.getSecond() << ")" << std::endl;

    return 0;
}

