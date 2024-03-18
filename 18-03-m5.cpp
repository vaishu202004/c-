#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    virtual void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    char grade;
public:
    Student(const std::string& n, int a, char g) : Person(n, a), grade(g) {}

    void displayInfo() const override {
        std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

int main() {
    Person person("John", 30);
    Student student("Alice", 20, 'A');

    person.displayInfo();
    student.displayInfo();

    return 0;
}

