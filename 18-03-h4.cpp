#include <iostream>
#include <string>

class Employee {
protected:
    int id;
    std::string name;
public:
    Employee(int i, const std::string& n) : id(i), name(n) {}

    virtual void printDetails() {
        std::cout << "Employee Details: ID: " << id << ", Name: " << name << std::endl;
    }
};

class Manager : public Employee {
private:
    std::string department;
public:
    Manager(int i, const std::string& n, const std::string& dep) : Employee(i, n), department(dep) {}

    void printDetails() override {
        Employee::printDetails();
        std::cout << "Department: " << department << std::endl;
    }
};

int main() {
    Employee* emp = new Manager(101, "John", "HR");
    emp->printDetails();
    delete emp;

    return 0;
}

