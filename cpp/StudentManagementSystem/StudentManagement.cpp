//
// Created by Nguyen Phuong Vi on 15/11/2024.
//

#include "StudentManagement.h"
#include "Student.h"

void StudentManagement::addStudent(Student student) {
    this->students.push_back(student);
}

void StudentManagement::displayAllStudents() const {
    for (auto student : this->students) {
        student.displayInfo();
    }
}

double StudentManagement::calculateAverageScore() const {
    double sumScore = 0;
    for (auto student : this->students) {
        sumScore += student.getScore();
    }

    return sumScore / this->students.size();
}

Student StudentManagement::getTopStudent() const {
    return this->students.front();
}

Student StudentManagement::getLowestStudent() const {
    return this->students.back();
}
