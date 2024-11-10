//
// Created by vinhnq on 10/11/2024.
//

#include "Department.h"

// Constructor for Department, using `std::move` to transfer ownership of `name`
// and initializing `id`. This optimizes performance by avoiding copying.
Department::Department(const int id, std::string name) : id(id), name(std::move(name)) {}

// Getter to retrieve the department's name.
std::string Department::getName() {
    return name;
}

// Getter to retrieve the department's ID.
int Department::getId() const {
    return id;
}
