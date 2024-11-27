//
// Created by vinhnq on 27/11/2024.
//

#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"


class Manager : public Employee {
private:
    double bonus;

public:
    Manager(const std::string& id, const std::string& name, int age, double basic_salary, double bonus);

    double calculate_salary() const override;

    void get_info() const override;
};



#endif //MANAGER_H
