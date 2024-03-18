#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
public:
    Student(const std::string& n, int a) : name(n), age(a) {}
    void display() const {
        std::cout << "Student Name: " << this->name << ", Age: " << this->age << std::endl;
    }
};

int main() {
    Student* ptr = new Student("John", 20);
    ptr->display();
    delete ptr;
    return 0;
}

