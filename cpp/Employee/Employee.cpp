//
// Created by vinhnq on 10/11/2024.
//

#include "Employee.h"

// Constructor for Employee, using `std::move` for `name` and `department` to avoid copying.
Employee::Employee(std::string name, const int id, Department department)
    : name(std::move(name)), id(id), department(std::move(department)) {}

// Getter for the employee's name.
std::string Employee::getName() const {
    return name;
}

// Getter for the employee's ID.
int Employee::getId() const {
    return id;
}

// Getter to access the employee's department.
Department Employee::getDepartment() const {
    return department;
}
