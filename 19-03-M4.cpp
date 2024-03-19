#include <iostream>
#include <stdexcept>

class Student {
public:
    int rollNumber;
    int marks;
};

int main() {
    try {
        int size;
        std::cout << "Enter number of students: ";
        std::cin >> size;

        Student* students = new Student[size];

        // Populate student details
        for (int i = 0; i < size; ++i) {
            students[i].rollNumber = i + 1;
            std::cout << "Enter marks for student " << students[i].rollNumber << ": ";
            std::cin >> students[i].marks;
        }

        // Display student details
        std::cout << "Student Details:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << "Roll Number: " << students[i].rollNumber << ", Marks: " << students[i].marks << std::endl;
        }

        delete[] students;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Memory allocation failed." << std::endl;
    }
    
    return 0;
}

