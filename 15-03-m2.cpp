#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
public:
    Student() : name("Unknown"), age(0) {}
    Student(std::string n, int a) : name(n), age(a) {}
    void displayDetails() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student student1;
    student1.displayDetails();
    return 0;
}

