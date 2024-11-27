//
// Created by vinhnq on 27/11/2024.
//

#include "Employee.h"

#include <iomanip>
#include <iostream>
#include <ostream>

Employee::Employee(const std::string &id, const std::string &name, int age, double basic_salary) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->basic_salary = basic_salary;
}

Employee::~Employee() = default;

double Employee::calculate_salary() const {
    return basic_salary;
}

void Employee::get_info() const {
    std::cout << "ID: " << this->id << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Age: " << this->age << std::endl;
    std::cout << "Basic_Salary: " << this->basic_salary << std::endl;
}
