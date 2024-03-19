#include <iostream>

template<typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(const T1& f, const T2& s) : first(f), second(s) {}
    void display() const {
        std::cout << "First: " << first << ", Second: " << second << std::endl;
    }
};

int main() {
    Pair<int, double> pair1(3, 4.5);
    Pair<std::string, char> pair2("Hello", 'A');

    pair1.display();
    pair2.display();

    return 0;
}

