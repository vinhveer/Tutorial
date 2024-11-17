//
// Created by vinhnq on 11/11/2024.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
private:
    int id;
    std::string name;

public:
    Employee();

    ~Employee();

    int getId();
    std::string getName();

    void Display() {};
};

#endif //EMPLOYEE_H
