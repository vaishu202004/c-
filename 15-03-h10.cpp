#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* top;

    // Helper function for copying stack
    Node* copyStack(const Node* node) {
        if (node == nullptr) return nullptr;
        Node* newNode = new Node(node->data);
        newNode->next = copyStack(node->next);
        return newNode;
    }

public:
    // Default constructor
    Stack() : top(nullptr) {}

    // Copy constructor to create a deep copy of the stack
    Stack(const Stack& other) : top(nullptr) {
        top = copyStack(other.top);
    }

    // Destructor to release memory allocated for nodes
    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Other member functions for push, pop, etc.
};

int main() {
    // Test the Stack class
    Stack stack1;
    // Perform operations on stack1...

    // Create a copy of stack1 using copy constructor
    Stack stack2 = stack1;

    // Perform operations on stack1 and stack2 independently
    // Changes to stack1 should not affect stack2 and vice versa

    return 0;
}

