#include <iostream>
#include <thread>
using namespace std;

void printMessage() {
    cout << "Hello from thread!" << endl;  // ����� ��������� �� ������
}

int main() {
    thread t1(printMessage);  // �������� ������, ������� ��������� ������� printMessage
    t1.join();  // �������� ���������� ������ ����� ������� �� main
    return 0;
}
