#include <iostream>

//�������� �������� ���������� �ᒺ�� �������������.����� �������� �������������� ������
//������ �� ��� ��������� ��������.
//���������� �ᒺ�� �������������.
//������ ������� ���� :
//�������(��) -> 9;
//������(��) -> 7.5;
//������(��) -> 5;
//�ᒺ�: 337.50 ���.��.

int main() {
    double length, width, height, volume;

    // ���� ��������� �� ����� �� �������� �������� �����
    std::cout << "���������� ��'��� �������������." << std::endl;
    std::cout << "������ ������� ����:" << std::endl;

    // ���������� �������
    std::cout << "������� (��) -> ";
    std::cin >> length;

    // ���������� ������
    std::cout << "������ (��) -> ";
    std::cin >> width;

    // ���������� ������
    std::cout << "������ (��) -> ";
    std::cin >> height;

    // ���������� ��'��� �������������
    volume = length * width * height;

    // ���� ����������
    std::cout << "��'��: " << volume << " ���. ��." << std::endl;

    return 0;
}
