#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    char grade;
public:
    Student(const std::string& n, char g) : name(n), grade(g) {}
    void display() const {
        std::cout << "Name: " << this->name << ", Grade: " << this->grade << std::endl;
    }
};

int main() {
    Student stu("Alice", 'A');
    stu.display();

    return 0;
}

