#include <iostream>
#include <cstdlib> // ��� ������� rand() � srand()
#include <ctime>   // ��� ������� time()

int main() {
    srand(time(NULL)); // ������������� ���������� ��������� �����

    int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 101; // ��������� ���������� ����� �� 0 �� 100
    }

    std::cout << "������ ��������� ����� �� 0 �� 100: ";
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}