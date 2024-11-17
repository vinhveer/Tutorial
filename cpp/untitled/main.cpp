#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> array;

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);

    std::cout << "array size: " << array.size() << std::endl;

    array.erase(array.begin() + 1);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }

    std::cout << array.empty() << std::endl;
}