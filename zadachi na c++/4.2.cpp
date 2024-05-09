#include <iostream>
#include <cmath>

double calculate_y(double x) {
    if (x > 0) {
        return std::pow(std::sin(x), 2);
    }
    else {
        return 1 - 2 * std::pow(std::sin(x), 2);
    }
}

int main() {
    double x = 1.0;  // Пробуем для x > 0
    double y = calculate_y(x);
    std::cout << "y = " << y << std::endl;

    x = -1.0;  // Пробуем для x <= 0
    y = calculate_y(x);
    std::cout << "y = " << y << std::endl;
    return 0;
}