#include <iostream>

int main() {
    // �������� 1
    std::cout << "�������� 1. ������ 5 ������ ��������: ";
    double grade1, grade2, grade3, grade4, grade5;
    std::cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
    double averageGrade = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
    if (averageGrade >= 4) {
        std::cout << "������� ��������� �� ������" << std::endl;
    }
    else {
        std::cout << "������� �� ��������� �� ������" << std::endl;
    }

    // �������� 2
    std::cout << "�������� 2. ������ �����: ";
    int number;
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << "����� �����, ��������� �������� �� 3: " << number * 3 << std::endl;
    }
    else {
        std::cout << "����� �������, ��������� ������ �� 2: " << number / 2 << std::endl;
    }

    // �������� 3
    std::cout << "�������� 3. ������ ��� �����: ";
    double num1, num2;
    std::cin >> num1 >> num2;
    char operation;
    std::cout << "������� ����������� �������� (+, -, *, /): ";
    std::cin >> operation;
    double result;
    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            std::cout << "�������: ������ �� ����" << std::endl;
            return 1;
        }
        break;
    default:
        std::cout << "�������: ������ ��������" << std::endl;
        return 1;
    }
    std::cout << "���������: " << result << std::endl;

    return 0;
}




//�������� 1. ���������� � ��������� ������� 5 ������
//��������.���������, �� ��������� ������� �� ������.
//������� ������ ������, ���� ���� ������� ��� 4 � ����.
//�������� 2. ���������� ������� � ��������� �����.����
//���� �����, ��������� ���� �� ���, ������ � �������
//�� ���.��������� ������� �� �����.
//�������� 3. �������� �������� - �����������.����������
//������� ��� ����� � ������ ����������� ��.�������
//�� ����� ���������.