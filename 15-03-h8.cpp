#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    // Default constructor setting count to 0
    Counter() : count(0) {}

    // Overload the prefix increment operator (++)
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Display the count
    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    // Create a Counter object
    Counter counter;

    // Increment the counter using prefix increment operator
    ++counter;
    ++counter;

    // Display the count
    counter.display();

    return 0;
}

