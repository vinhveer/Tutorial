#include <iostream>
#include "Employee.h"
#include "Department.h"

int main() {
    // Create a Department object for the IT department
    const Department dept(101, "IT");

    // Create an Employee object for "Alice" who works in the IT department
    const Employee emp("Alice", 1, dept);

    // Display employee information, including details about the department
    std::cout << "Employee Name: " << emp.getName() << std::endl;
    std::cout << "Employee ID: " << emp.getId() << std::endl;
    std::cout << "Department Name: " << emp.getDepartment().getName() << std::endl;
    std::cout << "Department ID: " << emp.getDepartment().getId() << std::endl;

    return 0;
}
