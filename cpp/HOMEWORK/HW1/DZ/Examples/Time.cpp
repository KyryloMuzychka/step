//���������� ������� � ��������� ��� � ��������, �� ����� � ������� ���.������� �� ����� ��������
//��� � �������, �������� � ��������.����������, ������
//�����, ������ � ������ ���������� �� ������.

#include <iostream>

int main() {
    int secondsInput;

    // �������� � ����������� ������� ������
    std::cout << "������ ������� ������, �� ������ � ������� ���: ";
    std::cin >> secondsInput;

    // ���������� �����, ������ �� ������ ��������� ����
    int hours = secondsInput / 3600;
    int minutes = (secondsInput % 3600) / 60;
    int seconds = secondsInput % 60;

    // ��������� ��������� ����
    std::cout << "�������� ���: " << hours << " �����, " << minutes << " ������, " << seconds << " ������." << std::endl;

    // ���������� ������� ���� �� ������
    int remainingSeconds = 86400 - secondsInput; // 86400 - ������� ������ � ���

    // ���������� �����, ������ �� ������ �� ������
    int remainingHours = remainingSeconds / 3600;
    int remainingMinutes = (remainingSeconds % 3600) / 60;
    int remainingSecondsFinal = remainingSeconds % 60;

    // ��������� ���� �� ������
    std::cout << "��� �� ������: " << remainingHours << " �����, " << remainingMinutes << " ������, " << remainingSecondsFinal << " ������." << std::endl;

    return 0;
}

