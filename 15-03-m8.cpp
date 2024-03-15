#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    Counter operator++() {
        ++count;
        return *this;
    }
};

int main() {
    Counter counter;
    ++counter;
    return 0;
}

