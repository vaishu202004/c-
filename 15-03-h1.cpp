#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;
public:
    String(const char* s) : str(new char[strlen(s) + 1]) {
        strcpy(str, s);
    }

    // Copy constructor for deep copy
    String(const String& other) : str(new char[strlen(other.str) + 1]) {
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    String operator+(const String& other) {
        // Dummy implementation for string concatenation
        return String(""); // Dummy implementation
    }
};

int main() {
    String s1("Hello");
    String s2 = s1; // Copy constructor called for deep copy
    return 0;
}

