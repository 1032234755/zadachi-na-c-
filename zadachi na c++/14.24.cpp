#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    std::cout << "Пары простых чисел-близнецов до 200:" << std::endl;
    for (int num = 2; num < 199; num++) {
        if (is_prime(num) && is_prime(num + 2)) {
            std::cout << "(" << num << ", " << num + 2 << ")" << std::endl;
        }
    }
    return 0;
}