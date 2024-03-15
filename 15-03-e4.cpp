#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    
    // Copy constructor
    Person(const Person& other) : name(other.name), age(other.age) {}

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person1("John", 30);
    person1.displayInfo();

    // Using copy constructor to create person2
    Person person2 = person1;
    person2.displayInfo();

    return 0;
}

