//�������� ��������, ��� �������� �ᒺ� ���.

#include <iostream>
#include <cmath> // ϳ�������� �������� ��� ������������ ��������

int main() {
    double radius, volume;

    // ���� ��������� �� ����� �� �������� �������� �����
    std::cout << "���������� ��'��� ���." << std::endl;
    std::cout << "������ ����� ��� (��): ";
    std::cin >> radius;

    // ���������� ��'��� ���
    volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // ���� ����������
    std::cout << "��'�� ���: " << volume << " ���. ��." << std::endl;

    return 0;
}
