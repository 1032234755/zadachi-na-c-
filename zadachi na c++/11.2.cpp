#include <iostream>

int main() {
    int array[10];

    std::cout << "������� 10 �����:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "������� ����� " << i + 1 << ": ";
        std::cin >> array[i];
    }

    std::cout << "����������� ������: ";
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}