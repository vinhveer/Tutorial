//
// Created by vinhnq on 27/11/2024.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string id;
    std::string name;
    int age;
    double basic_salary;

public:
    Employee(const std::string& id, const std::string& name, int age, double basic_salary);

    virtual ~Employee();

    virtual double calculate_salary() const;

    virtual void get_info() const;
};


#endif //EMPLOYEE_H
