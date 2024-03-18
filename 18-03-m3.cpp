#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;
public:
    Employee(const std::string& n, int i, double s) : name(n), id(i), salary(s) {}

    virtual void displayDetails() const = 0;
};

class Manager : public Employee {
private:
    std::string department;
public:
    Manager(const std::string& n, int i, double s, const std::string& d) : Employee(n, i, s), department(d) {}

    void displayDetails() const override {
        std::cout << "Manager Name: " << name << ", ID: " << id << ", Salary: " << salary << ", Department: " << department << std::endl;
    }
};

class Worker : public Employee {
public:
    Worker(const std::string& n, int i, double s) : Employee(n, i, s) {}

    void displayDetails() const override {
        std::cout << "Worker Name: " << name << ", ID: " << id << ", Salary: " << salary << std::endl;
    }
};

int main() {
    Manager manager("John", 101, 5000, "HR");
    Worker worker("Alice", 201, 3000);

    manager.displayDetails();
    worker.displayDetails();

    return 0;
}

