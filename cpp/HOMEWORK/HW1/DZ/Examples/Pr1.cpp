#include <iostream>

int main() {
    // �������� 1
    double num1, num2;
    std::cout << "�������� 1. ������ ��� �����: ";
    std::cin >> num1 >> num2;
    double sum1 = num1 + num2;
    double product1 = num1 * num2;
    double average1 = (num1 + num2) / 2;
    std::cout << "����: " << sum1 << std::endl;
    std::cout << "�������: " << product1 << std::endl;
    std::cout << "������ �����������: " << average1 << std::endl;

    // �������� 2
    double num3, num4, num5;
    std::cout << "�������� 2. ������ ��� �����: ";
    std::cin >> num3 >> num4 >> num5;
    double sum2 = num3 + num4 + num5;
    double product2 = num3 * num4 * num5;
    double average2 = (num3 + num4 + num5) / 3;
    std::cout << "����: " << sum2 << std::endl;
    std::cout << "�������: " << product2 << std::endl;
    std::cout << "������ �����������: " << average2 << std::endl;

    // �������� 3
    double price, quantity, discount;
    std::cout << "�������� 3. ������ ������� ������ ��������, ���� ������� � ������� ������: ";
    std::cin >> price >> quantity >> discount;
    double totalAmount = price * quantity * (1 - discount / 100);
    std::cout << "�������� ���� ����������: " << totalAmount << std::endl;

    // �������� 4
    double sales;
    std::cout << "�������� 4. ������ �������� ���� ���� ��������� �� �����: ";
    std::cin >> sales;
    double salary = 100 + 0.05 * sales;
    std::cout << "ϳ�������� �������� ���������: " << salary << std::endl;

    // �������� 5
    double fileSizeGB, internetSpeedBPS;
    std::cout << "�������� 5. ������ ����� ����� � ��������� � �������� ��������-璺������ � ���� �� �������: ";
    std::cin >> fileSizeGB >> internetSpeedBPS;
    double fileSizeBits = fileSizeGB * 8 * 1024 * 1024 * 1024; // ���������� �������� � ���
    double downloadTimeSeconds = fileSizeBits / internetSpeedBPS;
    int hours = downloadTimeSeconds / 3600;
    int minutes = (downloadTimeSeconds - hours * 3600) / 60;
    int seconds = downloadTimeSeconds - hours * 3600 - minutes * 60;
    std::cout << "��� ������������ �����: " << hours << " ����� " << minutes << " ������ " << seconds << " ������" << std::endl;

    return 0;
}



//�������� 1. ���������� ������� � ��������� ��� �����.
//���������� ���� ����, ������� � ������ �����������.
//�������� 2. ���������� ������� � ��������� ��� �����.
//���������� ���� ����, ������� � ������ �����������.
//�������� 3. ���������� ������� � ��������� �������
//������ ��������, ���� ������� � ������� ������.���������� �������� ���� ����������.
//�������� 4. �������� ��������� � 100$ + 5 % �� �������.���������� ������� � ��������� �������� ���� ����
//��������� �� �����.���������� ��������� ��������
//���������.
//�������� 5. ���������� ������� � ��������� ����� ������ ����� � ��������� � �������� �������� - 璺������
//� ���� �� �������.����������, �� ������ �����, ������
//� ������ ������������� ����.
