#include <iostream>
#include <ostream>

#include "Developer.h"
#include "Manager.h"

int main() {
    Manager manager = Manager("MN001", "John Doe", 20, 2000, 200);

    Developer developer = Developer("DV001", "Doe John", 19, 3000, 2, 200);

    manager.get_info();

    developer.get_info();

    std::cout << manager.calculate_salary() << std::endl;
    std::cout << developer.calculate_salary() << std::endl;

    return 0;
}
