#include <iostream>

class Employee {
private:
    std::string name;
    float salary;
public:
    Employee(std::string name, float salary) : name(name), salary(salary) {}

    static float calculateAverageSalary(Employee employees[], int numEmployees) {
        float totalSalary = 0;
        for (int i = 0; i < numEmployees; ++i) {
            totalSalary += employees[i].salary;
        }
        return totalSalary / numEmployees;
    }
};

int main() {
    Employee employees[] = {Employee("John", 50000), Employee("Alice", 60000), Employee("Bob", 70000)};
    int numEmployees = sizeof(employees) / sizeof(employees[0]);
    std::cout << "Average salary: " << Employee::calculateAverageSalary(employees, numEmployees) << std::endl;
    return 0;
}

