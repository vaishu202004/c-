#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
    char gender;
public:
    Person(const std::string& n, int a, char g) : name(n), age(a), gender(g) {}

    void displayDetails() {
        std::cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << std::endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    double marks;
public:
    Student(const std::string& n, int a, char g, int roll, double m) : Person(n, a, g), rollNumber(roll), marks(m) {}

    void displayDetails() {
        Person::displayDetails();
        std::cout << "Roll Number: " << rollNumber << ", Marks: " << marks << std::endl;
    }
};

int main() {
    Person person("John", 25, 'M');
    person.displayDetails();

    Student student("Alice", 20, 'F', 101, 95.5);
    student.displayDetails();

    return 0;
}

