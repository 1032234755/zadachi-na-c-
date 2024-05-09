#include <iostream>

int main() {
    int array[10];

    std::cout << "Введите 10 чисел:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Введите число " << i + 1 << ": ";
        std::cin >> array[i];
    }

    std::cout << "Заполненный массив: ";
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}