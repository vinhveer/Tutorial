//
// Created by vinhnq on 27/11/2024.
//

#include "Developer.h"

#include <iostream>

Developer::Developer(const std::string &id, const std::string &name, int age, double basic_salary, int overtime_hours,
                     double hourly_rate) : Employee(id, name, age, basic_salary) {
    this->overtime_hours = overtime_hours;
    this->hourly_rate = hourly_rate;
}

double Developer::calculate_salary() const {
    return Employee::calculate_salary() + hourly_rate * overtime_hours;
}

void Developer::get_info() const {
    std::cout << "Role: Developer";
    Employee::get_info();
}
