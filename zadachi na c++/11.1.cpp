#include <iostream>

int main() {
    int array[8] = { 57, 0, -50, 46, -34, 46, 0, -13 };

    std::cout << "Массив: ";
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}