#include <iostream>
#include <cmath>

double calculate_x(double a, double b, double d) {
    double term1 = ((2 / b) - b) / (d * d + 25);
    double term2 = (std::fabs(a) + 2 * std::sin(b)) / (5.5 * a);
    double x = term1 + term2;
    return x;
}

double calculate_y(double a, double b) {
    double y = std::sqrt(b) + (a + b) / 2;
    return y;
}

int main() {
    double a = 1.0;
    double b = 2.0;
    double d = 3.0;
    double x = calculate_x(a, b, d);
    double y = calculate_y(a, b);
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    return 0;
}