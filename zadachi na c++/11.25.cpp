//Дан массив. Напечатать: а) второй, четвертый и т. д. элементы; б) третий, шестой и т. д. элементы.
#include <iostream>
#include <vector>
using namespace std:
void print_elements(const std::vector<int>& arr) {
    std::cout << "Элементы на четных позициях (2, 4, ...):" << std::endl;
    for (size_t i = 1; i < arr.size(); i += 2) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Элементы на позициях кратных трем (3, 6, ...):" << std::endl;
    for (size_t i = 2; i < arr.size(); i += 3) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> array = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    print_elements(array);
    return 0;
}