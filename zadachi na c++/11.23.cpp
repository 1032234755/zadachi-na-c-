#include <iostream>
#include <cstdlib> // для функций rand() и srand()
#include <ctime>   // для функции time()

int main() {
    srand(time(NULL)); // инициализация генератора случайных чисел

    int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 101; // генерация случайного числа от 0 до 100
    }

    std::cout << "Массив случайных чисел от 0 до 100: ";
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}