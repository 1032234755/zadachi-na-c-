#include <iostream>
#include <random>
#include <vector>

std::vector<double> generate_random_array(int count, double low, double high) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(low, high);
    std::vector<double> array;
    for (int i = 0; i < count; i++) {
        array.push_back(dis(gen));
    }
    return array;
}

std::vector<int> generate_random_int_array(int count, int low, int high) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(low, high - 1);
    std::vector<int> array;
    for (int i = 0; i < count; i++) {
        array.push_back(dis(gen));
    }
    return array;
}

int main() {
    auto array_a = generate_random_array(13, 0, 1);
    auto array_b = generate_random_array(13, 22, 23);
    auto array_c = generate_random_array(13, 0, 10);
    auto array_d = generate_random_array(13, -50, 50);
    auto array_e = generate_random_int_array(13, 0, 10);

    // Вывод для проверки
    std::cout << "Array a: ";
    for (double num : array_a) std::cout << num << " ";
    std::cout << "\nArray b: ";
    for (double num : array_b) std::cout << num << " ";
    std::cout << "\nArray c: ";
    for (double num : array_c) std::cout << num << " ";
    std::cout << "\nArray d: ";
    for (double num : array_d) std::cout << num << " ";
    std::cout << "\nArray e: ";
    for (int num : array_e) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}