#include <iostream>
#include "calculator.h"

int main() {
    int x = 5, y = 3;

    std::cout << "Add: " << add(x, y) << std::endl;
    std::cout << "Multiply: " << multiply(x, y) << std::endl;

    return 0;
}
