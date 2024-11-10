//
// Created by vinhnq on 10/11/2024.
//

#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>

class Department {
private:
    int id;
    std::string name;

public:
    // Constructor
    Department(int id, std::string name);

    // Getter for department name
    std::string getName();

    // Getter for department id
    int getId() const;
};

#endif //DEPARTMENT_H
