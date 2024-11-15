//
// Created by Nguyen Phuong Vi on 15/11/2024.
//

#include <iostream>
#include <iomanip>

#include "Student.h"

Student::Student() = default;

Student::Student(int id, const std::string& name, int score) {
    this->id = id;
    this->name = name;
    this->score = score;
}

void Student::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Score: " << std::fixed << std::setprecision(2) << score << std::endl;
}

double Student::getScore() const {
    return score;
}
