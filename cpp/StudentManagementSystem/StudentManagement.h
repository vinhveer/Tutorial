//
// Created by Nguyen Phuong Vi on 15/11/2024.
//

#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include <vector>

#include "Student.h"

class StudentManagement {
private:
    std::vector<Student> students;

public:
    void addStudent(Student student);

    void displayAllStudents() const;

    double calculateAverageScore() const;

    Student getTopStudent() const;

    Student getLowestStudent() const;

};

#endif //STUDENTMANAGEMENT_H
