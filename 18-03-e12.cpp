#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double salary;
public:
    Employee(const std::string& n, double s) : name(n), salary(s) {}
    void display() const {
        std::cout << "Name: " << name << ", Salary: " << salary << std::endl;
    }
};

int main() {
    Employee emp("John", 5000);
    Employee* ptr = &emp;

    ptr->display();

    return 0;
}

