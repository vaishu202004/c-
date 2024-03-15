#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;
public:
    // Constructor to initialize employee details
    Employee(const string& n, int a, double s) : name(n), age(a), salary(s) {}

    // Overload the less than operator (<) to compare employees based on salary
    bool operator<(const Employee& other) const {
        return salary < other.salary;
    }

    // Overload the greater than operator (>) to compare employees based on salary
    bool operator>(const Employee& other) const {
        return salary > other.salary;
    }

    // Display employee details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

int main() {
    // Create two employee objects
    Employee emp1("John", 30, 50000);
    Employee emp2("Alice", 35, 60000);

    // Compare employees based on salary
    if (emp1 < emp2) {
        cout << "Employee 1 has lower salary than Employee 2" << endl;
    } else if (emp1 > emp2) {
        cout << "Employee 1 has higher salary than Employee 2" << endl;
    } else {
        cout << "Both employees have the same salary" << endl;
    }

    return 0;
}

