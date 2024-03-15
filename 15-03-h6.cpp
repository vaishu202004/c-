#include <iostream>
#include <cstring> // Include <cstring> for string manipulation functions
using namespace std;

class String {
private:
    char* str;
public:
    // Constructor to initialize the string
    String(const char* s) {
        int len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    // Copy constructor to perform a deep copy
    String(const String& other) {
        int len = strlen(other.str);
        str = new char[len + 1];
        strcpy(str, other.str);
    }

    // Overload the concatenation operator (+) to concatenate two strings
    String operator+(const String& other) {
        int len1 = strlen(str);
        int len2 = strlen(other.str);
        char* result = new char[len1 + len2 + 1];
        strcpy(result, str);
        strcat(result, other.str);
        return String(result);
    }

    // Display the string
    void display() const {
        cout << str;
    }

    // Destructor to release the dynamically allocated memory
    ~String() {
        delete[] str;
    }
};

int main() {
    // Create two strings
    String str1("Hello, ");
    String str2("world!");

    // Concatenate two strings
    String result = str1 + str2;

    // Display the result
    cout << "Concatenated string: ";
    result.display();
    cout << endl;

    return 0;
}

