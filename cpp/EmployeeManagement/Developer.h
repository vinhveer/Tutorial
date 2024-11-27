//
// Created by vinhnq on 27/11/2024.
//

#ifndef DEVELOPER_H
#define DEVELOPER_H
#include <string>

#include "Employee.h"


class Developer : public Employee {
private:
    int overtime_hours;
    double hourly_rate;

public:
    Developer(const std::string &id, const std::string &name, int age, double basic_salary, int overtime_hours, double hourly_rate);

    double calculate_salary() const override;

    void get_info() const override;
};



#endif //DEVELOPER_H
