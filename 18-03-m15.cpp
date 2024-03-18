#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& n, int a) : name(n), age(a) {}
    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Student : public Person {
public:
    Student(const std::string& n, int a) : Person(n, a) {}
    void display() const override {
        std::cout << "Student - Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person* ptr = new Student("Alice", 20);
    ptr->display();

    delete ptr;
    return 0;
}

