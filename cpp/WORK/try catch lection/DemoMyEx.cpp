// DemoMyEx.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("����������� �� ����� ���� ����� ����");
    }
    return numerator / denominator;
}

void setAge(int age) {
    if (age < 0) {
        throw invalid_argument("������� �� ����� ���� �������������");
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello World!\n";

    try {
        // ���, ������� ����� ������������� ����������
        int result = divide(10, 0);  // ������������, ��� ������� divide ����� ��������� ����������
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Caught an exception: " << e.what() << std::endl;
    }


}

