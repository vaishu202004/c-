#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& n, int a) : name(n), age(a) {}
};

class Student : public Person {
private:
    char grade;
public:
    Student(const std::string& n, int a, char g) : Person(n, a), grade(g) {}
};

int main() {
    Student student("Alice", 20, 'A');

    return 0;
}

