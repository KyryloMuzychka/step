#include <iostream>
#include <thread>
#include <chrono>  // ���������� ��� ������ � ��������

void longRunningTask() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread running " << i << std::endl;  // ����� �������� ���� ����������
        std::this_thread::sleep_for(std::chrono::seconds(1));  // ������������ ������ �� 1 �������
    }
}

int main() {
    std::thread t1(longRunningTask);  // ������ ���������� ������ � ������
    t1.join();  // �������� ���������� ������
    return 0;
}
