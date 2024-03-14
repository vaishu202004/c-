#include <iostream>
#include <vector>

class Employee {
private:
    int id;
    std::string name;
    float salary;
    static float totalSalary;

public:
    Employee(int id, const std::string& name, float salary) : id(id), name(name), salary(salary) {
        totalSalary += salary;
    }

    static float getTotalSalary() {
        return totalSalary;
    }

    static void resetTotalSalary() {
        totalSalary = 0;
    }

    void displayDetails() const {
        std::cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << std::endl;
    }
};

float Employee::totalSalary = 0;

int main() {
    Employee emp1(1, "John", 50000);
    Employee emp2(2, "Alice", 60000);
    Employee emp3(3, "Bob", 70000);

    emp1.displayDetails();
    emp2.displayDetails();
    emp3.displayDetails();

    std::cout << "Total Salary: " << Employee::getTotalSalary() << std::endl;

    // Resetting total salary for demonstration
    Employee::resetTotalSalary();
    std::cout << "Total Salary after reset: " << Employee::getTotalSalary() << std::endl;

    return 0;
}

