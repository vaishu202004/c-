#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    ~Person() {
        std::cout << "Goodbye, " << name << "!" << std::endl;
    }

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person1("John", 30);
    person1.displayInfo();

    // Object is destroyed when it goes out of scope
    {
        Person person2("Alice", 25);
        person2.displayInfo();
    }

    return 0;
}

