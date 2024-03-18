#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    double salary;
public:
    Employee(const std::string& n, double s) : name(n), salary(s) {}
};

class Manager : public Employee {
private:
    std::string department;
public:
    Manager(const std::string& n, double s, const std::string& d) : Employee(n, s), department(d) {}
};

class Worker : public Employee {
public:
    Worker(const std::string& n, double s) : Employee(n, s) {}
};

int main() {
    Manager manager("John", 5000, "HR");
    Worker worker("Alice", 3000);

    return 0;
}

