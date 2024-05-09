#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "hello";
    string second_word = "world";
    int k = 3;

    // 12.11 Вывод третьего символа
    cout << "Третий символ: " << word[2] << endl;

    // 12.12 Вывод последнего символа
    cout << "Последний символ: " << word[word.length() - 1] << endl;

    // 12.13 Вывод k-го символа
    if (k - 1 < word.length()) {
        cout << k << "-й символ: " << word[k - 1] << endl;
    }

    // 12.14 Сравнение второго и четвертого символа
    if (word.length() > 3) {
        cout << "Второй и четвертый символ одинаковы: " << (word[1] == word[3] ? "да" : "нет") << endl;
    }
    else {
        cout << "Слово слишком короткое для сравнения" << endl;
    }

    // 12.15 Проверка начала и конца слова
    cout << "Начинается и заканчивается на одну и ту же букву: " << (word[0] == word[word.length() - 1] ? "да" : "нет") << endl;

    // 12.16 Сравнение начала первого слова и конца второго слова
    cout << "Первое слово начинается, а второе заканчивается на одну и ту же букву: " << (word[0] == second_word[second_word.length() - 1] ? "да" : "нет") << endl;

    return 0;
}