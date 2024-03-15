#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(NULL) {} // Use NULL instead of nullptr
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(NULL) {} // Use NULL instead of nullptr

    LinkedList(int arr[], int size) : head(NULL) { // Use NULL instead of nullptr
        for (int i = size - 1; i >= 0; --i) {
            Node* newNode = new Node(arr[i]);
            newNode->next = head;
            head = newNode;
        }
    }

    ~LinkedList() {
        Node* current = head;
        while (current != NULL) { // Use NULL instead of nullptr
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
    
    void display() {
        Node* current = head;
        while (current != NULL) { // Use NULL instead of nullptr
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    LinkedList list(arr, size);
    list.display();

    return 0;
}


