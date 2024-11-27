//
// Created by vinhnq on 27/11/2024.
//

#include "Manager.h"

#include <iostream>
#include <ostream>

Manager::Manager(const std::string &id, const std::string &name, int age, double basic_salary, double bonus): Employee(id, name, age, basic_salary) {
    this->bonus = bonus;
}

double Manager::calculate_salary() const {
    return Employee::calculate_salary() + bonus;
}

void Manager::get_info() const {
    std::cout << "Role: Manager" << std::endl;
    Employee::get_info();
}