#include <iostream>
using namespace std;

// ����������� ������� �������
template <typename T>
T sum(T a, T b) {
    return a + b;
}


int main() {
    // ������������� ��������� ������� ��� int
    int intResult = sum<int>(5, 3);
    cout << "Sum of 5 and 3 is " << intResult << endl;

    // ������������� ��������� ������� ��� double
    double doubleResult = sum<double>(2.5, 3.5);
    cout << "Sum of 2.5 and 3.5 is " << doubleResult << endl;

    return 0;
}
