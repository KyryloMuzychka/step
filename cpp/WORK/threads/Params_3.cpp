#include <iostream>
#include <thread>

void displayNumber(int n) {
    std::cout << "Number: " << n << std::endl;  // ����� ����������� �����
}

int main() {
    std::thread t1(displayNumber, 10);  // �������� ������ � ��������� ���������
    t1.join();  // �������� ���������� ������
    return 0;
}
