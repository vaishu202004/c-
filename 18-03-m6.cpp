#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    char grade;
public:
    Student(const std::string& n, int a, char g) : Person(n, a), grade(g) {}
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

int main() {
    Person p("John", 20);
    Student s("Alice", 18, 'A');

    std::cout << "Person Details: ";
    p.displayInfo();

    std::cout << "Student Details: ";
    s.displayInfo();

    return 0;
}

