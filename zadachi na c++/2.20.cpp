#include <iostream>
#include <cmath>

double calculate_a(double e, double f, double g) {
    return std::sqrt(e - (3 * std::pow(f, 3)) / g) + g;
}

double calculate_b(double e, double h) {
    return std::sin(e) + std::pow(std::cos(h), 2);
}

double calculate_c(double e, double f, double g) {
    return 33 * g / (e * f - 3);
}

int main() {
    double e = 1.0;
    double f = 2.0;
    double g = 3.0;
    double h = 4.0;
    double a = calculate_a(e, f, g);
    double b = calculate_b(e, h);
    double c = calculate_c(e, f, g);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    return 0;
}