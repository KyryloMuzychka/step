#include <iostream>

int main() {
    char operation;
    double num1, num2;

    // ���� ������� �����
    std::cout << "������� ������ �����: ";
    std::cin >> num1;

    // ���� ��������
    std::cout << "������� �������� (+, -, *, /): ";
    std::cin >> operation;

    // ���� ������� �����
    std::cout << "������� ������ �����: ";
    std::cin >> num2;

    double result;

    // ���������� �������� � ����� ����������
    switch (operation) {
    case '+':
        result = num1 + num2;
        std::cout << "���������: " << result << std::endl;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "���������: " << result << std::endl;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "���������: " << result << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << "���������: " << result << std::endl;
        }
        else {
            std::cout << "������: ������� �� ����!" << std::endl;
        }
        break;
    default:
        std::cout << "������: ������������ ��������!" << std::endl;
        break;
    }

    return 0;
}
