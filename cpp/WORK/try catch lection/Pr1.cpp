#include <iostream>
#include <string>
using namespace std;

// ������� ������������� �������, ���������� ���������� ��� ������������ ��������
void setAge(int age) {
    if (age < 0) {
        throw invalid_argument("������� �� ����� ���� �������������");
    }
    cout << "������� ����������: " << age << endl;
}

int main() {
    try {
        setAge(-5);
    }
    catch (const invalid_argument& e) {
        cerr << "������: " << e.what() << endl;
    }
    return 0;
}


#include <vector>
#include <iostream>
#include <stdexcept>

// ������� �������� ������ � �������� ������� � ���������� ���������� ��� ������ �� �������
void accessElement(const vector<int>& vec, int index) {
    if (index < 0 || index >= vec.size()) {
        throw out_of_range("������ �� ��������� ��������� �������");
    }
    cout << "�������� ��������: " << vec[index] << endl;
}

int main() {
    vector<int> myVector = { 1, 2, 3 };
    try {
        accessElement(myVector, 3);
    }
    catch (const out_of_range& e) {
        cerr << "������: " << e.what() << endl;
    }
    return 0;
}


#include <stdexcept>
#include <iostream>

// ������� ������� ���� �����, ���������� ���������� ��� ������� �� ����
int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("������� �� ����");
    }
    return numerator / denominator;
}

int main() {
    try {
        cout << "��������� �������: " << divide(10, 0) << endl;
    }
    catch (const runtime_error& e) {
        cerr << "������: " << e.what() << endl;
    }
    return 0;
}

