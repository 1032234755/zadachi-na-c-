#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "hello";
    string second_word = "world";
    int k = 3;

    // 12.11 ����� �������� �������
    cout << "������ ������: " << word[2] << endl;

    // 12.12 ����� ���������� �������
    cout << "��������� ������: " << word[word.length() - 1] << endl;

    // 12.13 ����� k-�� �������
    if (k - 1 < word.length()) {
        cout << k << "-� ������: " << word[k - 1] << endl;
    }

    // 12.14 ��������� ������� � ���������� �������
    if (word.length() > 3) {
        cout << "������ � ��������� ������ ���������: " << (word[1] == word[3] ? "��" : "���") << endl;
    }
    else {
        cout << "����� ������� �������� ��� ���������" << endl;
    }

    // 12.15 �������� ������ � ����� �����
    cout << "���������� � ������������� �� ���� � �� �� �����: " << (word[0] == word[word.length() - 1] ? "��" : "���") << endl;

    // 12.16 ��������� ������ ������� ����� � ����� ������� �����
    cout << "������ ����� ����������, � ������ ������������� �� ���� � �� �� �����: " << (word[0] == second_word[second_word.length() - 1] ? "��" : "���") << endl;

    return 0;
}