#include <iostream> // ���������� ���������� ��� �����-������
#include <locale> 

int main() {

    setlocale(LC_ALL, "Russian"); // ������������� ������ ��� ��������� ���������
    // ���������� ���������� ��������� �����
    int integerNumber = 10; // ������������� ���
    double floatingPointNumber = 3.14; // ������������ ��� � ��������� ������
    char character = 'A'; // ���������� ���
    bool booleanValue = true; // ������� ���

    // ����� ���������� � �������
    std::cout << "����� �����: " << integerNumber << std::endl;
    std::cout << "����� � ��������� ������: " << floatingPointNumber << std::endl;
    std::cout << "������: " << character << std::endl;
    std::cout << "������ ��������: " << (booleanValue ? "true" : "false") << std::endl;

    // ������� ������������� ����������
    int sum = integerNumber + 5; // �������������� �������� (��������)
    bool isGreater = floatingPointNumber > 2.0; // �������� ��������� (������)
    integerNumber += 1; // �������� ������������ � ��������� (���������)

    // �������� ��������
    if (isGreater) {
        std::cout << "����� � ��������� ������ ������ 2.0" << std::endl;
    }

    // ���� � ������������
    while (integerNumber < 15) {
        std::cout << "����� ����� ������ �����: " << integerNumber << std::endl;
        integerNumber++; // �������������� integerNumber
    }

    return 0; // ���������� 0 �� ������� main()
}
