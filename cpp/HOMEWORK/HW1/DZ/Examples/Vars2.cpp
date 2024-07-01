#include <iostream>
#include <string> // ���������� ���������� ��� ������ �� ��������

int main() {
    // ������������� ���� ������
    int integerNumber = 10;
    std::cout << "������������� �����: " << integerNumber << std::endl;

    // ������������ ���� ������
    double doubleNumber = 3.14;
    std::cout << "������������ �����: " << doubleNumber << std::endl;

    // ���������� ��� ������
    char character = 'A';
    std::cout << "������: " << character << std::endl;

    // ������� ��� ������
    bool booleanValue = true;
    std::cout << "������� ��������: " << (booleanValue ? "true" : "false") << std::endl;

 
    // ��������� ��� ������
    std::string myString = "Hello, world!";
    std::cout << "������: " << myString << std::endl;

    // �������������� ��������
    int sum = integerNumber + 5;
    std::cout << "�����: " << sum << std::endl;

    double product = doubleNumber * 2;
    std::cout << "������������: " << product << std::endl;

    // ���������� ��������
    bool isEqual = integerNumber == doubleNumber;
    std::cout << "����� �����: " << (isEqual ? "true" : "false") << std::endl;

    // �������� ��������
    if (integerNumber > 5) 
    {
        std::cout << "������������� ����� ������ 5" << std::endl;
    }
    else 
    {
        std::cout << "������������� ����� �� ������ 5" << std::endl;
    }

    return 0;
}
