#include <iostream>
#include <locale> 

int main() {
    setlocale(LC_ALL, "Russian"); // ������������� ������ ��� ��������� ���������
    // ���� for ��� ������ ����� �� 1 �� 5
    std::cout << "���� for �� 1 �� 5:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // ������� �� ����� ������ ����� ���������� �����

    // ���� for ��� ���������� �������� ���������� �� 5 �� 1
    std::cout << "�������� ���� for �� 5 �� 1:" << std::endl;
    for (int i = 5; i >= 1; i--) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // ������������� ����� for ��� ������ �������
    int arr[] = { 10, 20, 30, 40, 50 };
    std::cout << "�������� �������:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // ���� for � ����������� �����������
    std::cout << "���� for � ����������� �����������:" << std::endl;
    for (int i = 1, j = 5; i <= 5; i++, j--) {
        std::cout << "i = " << i << ", j = " << j << std::endl;
    }

    // ����������� ���� for ��� ������ � ��������� (C++11 � ����)
    std::cout << "����������� ���� for ��� �������:" << std::endl;
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
