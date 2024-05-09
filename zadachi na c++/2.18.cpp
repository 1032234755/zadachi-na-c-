#include <iostream>
#include <cmath>

double calculate_z(double x, double y) {
    return (x + 2 + y) / (x * x);
}

double calculate_q(double x, double y) {
    return 7.25 * std::sin(x - std::fabs(y));
}

int main() {
    double x = 1.0;
    double y = 2.0;
    double z = calculate_z(x, y);
    double q = calculate_q(x, y);
    std::cout << "z = " << z << std::endl;
    std::cout << "q = " << q << std::endl;
    return 0;
}