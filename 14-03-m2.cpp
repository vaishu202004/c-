#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int id;
    int grades[3];

public:
    void setName(std::string studentName) {
        name = studentName;
    }

    void setId(int studentId) {
        id = studentId;
    }

    void setGrades(int subject1, int subject2, int subject3) {
        grades[0] = subject1;
        grades[1] = subject2;
        grades[2] = subject3;
    }

    std::string getName() {
        return name;
    }

    int getId() {
        return id;
    }

    void getGrades(int &subject1, int &subject2, int &subject3) {
        subject1 = grades[0];
        subject2 = grades[1];
        subject3 = grades[2];
    }
};

int main() {
    Student student;
    student.setName("John");
    student.setId(12345);
    student.setGrades(90, 85, 95);
    std::cout << "Student Name: " << student.getName() << std::endl;
    std::cout << "Student ID: " << student.getId() << std::endl;
    int subj1, subj2, subj3;
    student.getGrades(subj1, subj2, subj3);
    std::cout << "Grades: " << subj1 << ", " << subj2 << ", " << subj3 << std::endl;
    return 0;
}

