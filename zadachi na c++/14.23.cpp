#include <iostream>
#include <cmath>
#include <vector>

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
    std::vector<int> three_digit_primes;
    for (int i = 100; i < 1000; i++) {
        if (is_prime(i)) {
            three_digit_primes.push_back(i);
        }
    }

    std::cout << "Трехзначные простые числа:" << std::endl;
    for (int prime : three_digit_primes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}