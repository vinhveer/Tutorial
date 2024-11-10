//
// Created by vinhnq on 10/11/2024.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Department.h"

class Employee {
private:
    std::string name;
    int id;
    Department department; // Holds an instance of Department

public:
    // Constructor to initialize Employee with name, ID, and Department.
    Employee(std::string name, int id, Department department);

    // Getter for the employee's name.
    std::string getName() const;

    // Getter for the employee's ID.
    int getId() const;

    // Getter for the employee's department.
    Department getDepartment() const;
};

#endif //EMPLOYEE_H
