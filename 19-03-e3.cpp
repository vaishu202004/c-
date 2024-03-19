#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
public:
    virtual void displayInfo() const = 0; // Pure virtual function
};

class Manager : public Employee {
public:
    Manager(const std::string& name, int id) : Employee{name, id} {}
    void displayInfo() const override {
        std::cout << "Manager: " << name << ", ID: " << id << std::endl;
    }
};

class Clerk : public Employee {
public:
    Clerk(const std::string& name, int id) : Employee{name, id} {}
    void displayInfo() const override {
        std::cout << "Clerk: " << name << ", ID: " << id << std::endl;
    }
};

int main() {
    Manager manager("John", 101);
    Clerk clerk("Alice", 201);

    manager.displayInfo();
    clerk.displayInfo();

    return 0;
}

