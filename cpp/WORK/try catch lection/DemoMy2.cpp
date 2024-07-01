#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// ����������� ����������������� ������ ����������
class DataValidationException : public std::exception {
private:
    std::string message;

public:
    DataValidationException(const std::string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

// ������� ��� ��������� �������� ������������
void validateAge(int age) {
    if (age < 0 || age > 150) {
        throw DataValidationException("������� ������ ���� � �������� �� 0 �� 150 ���.");
    }
    std::cout << "������� �������: " << age << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    try {
        validateAge(-5);  // ������� ���������� �������� �������
    }
    catch (const DataValidationException& e) {
        std::cerr << "������ ���������: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "����������� ������: " << e.what() << std::endl;
    }
    return 0;
}

//����������� ���������� : DataValidationException ������������ ��� ����������� �� std::exception, 
// ��� ��������� ��� ����������������� � ������� ������� ����������� ���������� C++.
//����������� : ��������� ������, ������� ����������� � ������� ���� message � ������������ ��� ������ what(), 
// ������� �������������� ��� �������������� ��������� �� ������.
//������� validateAge : ���������, ��������� �� ������� � ���������� ��������.
// ���� ���, ���������� DataValidationException � ��������������� ����������.
//���� try - catch � main : �������� ������� validateAge � ������������ ���������.
// ��� ��������� DataValidationException ������������� ��� ���������� � ������� ��������� �� ������.
// ����� ������������ �������������� �������� ������ ��������� ����������� ����������.

