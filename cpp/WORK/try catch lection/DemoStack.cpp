#include <iostream>
#include <stdexcept>

using namespace std;

void level3() {
    throw runtime_error("������ �� ������ 3");
}

void level2() {
    level3();
}

void level1() {
    try {
        level2();
    }
    catch (const runtime_error& e) {
        cout << "���������� ����������� � level1: " << e.what() << endl;
        throw;  // �������� ���������� ������ �� �����
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    try {
        level1();
    }
    catch (const runtime_error& e) {
        cout << "���������� ����������� � main: " << e.what() << endl;
    }
    return 0;
}
