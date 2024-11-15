#include <iostream>

#include "Student.h"
#include "StudentManagement.h"

int main() {
    StudentManagement student_management;

    Student student1 = {1, "John", 4};
    Student student2 = {2, "Alex", 6};
    Student student3 = {3, "Anna", 7};

    student_management.addStudent(student1);
    student_management.addStudent(student2);
    student_management.addStudent(student3);

    student_management.displayAllStudents();
    std::cout << "Average Score: " << student_management.calculateAverageScore() << std::endl;

    Student top_student = student_management.getTopStudent();
    Student lowest_student = student_management.getLowestStudent();

    std::cout << "Top student: " << std::endl;
    top_student.displayInfo();

    std::cout << "Lowest student: " << std::endl;
    lowest_student.displayInfo();

    return 0;
}
