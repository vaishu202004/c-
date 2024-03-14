#include <iostream>

// Define a callback function type
typedef void (*CallbackFunction)(int);

// Function that takes a callback function as an argument and calls it
void processCallback(int data, CallbackFunction callback) {
    // Do some processing
    std::cout << "Processing data: " << data << std::endl;

    // Call the callback function
    callback(data);
}

// Sample callback function 1
void callbackFunction1(int data) {
    std::cout << "Callback function 1 called with data: " << data << std::endl;
}

// Sample callback function 2
void callbackFunction2(int data) {
    std::cout << "Callback function 2 called with data: " << data << std::endl;
}

int main() {
    // Using callback function 1
    processCallback(100, callbackFunction1);

    // Using callback function 2
    processCallback(200, callbackFunction2);

    return 0;
}

