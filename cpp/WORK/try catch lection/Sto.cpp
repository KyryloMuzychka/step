//� C++ ����������� ���������� ������������� ��������� �������, ����������� stoi, ������� ��������� ��������������� ������ � ��������� �������� ����.��� ��� ������� �������� � ������������ ����� <string> � �������� ������� � stoi ������������� � �����������.��� �������� �� ��� :
//
//stol � stoll :
//
//stol(string to long) : ����������� ������ � long int.
//stoll(string to long long) : ����������� ������ � long long int.
//��� ������� ����� ������������ ���������� std::invalid_argument � std::out_of_range, ���������� stoi.
//stoul � stoull :
//
//stoul(string to unsigned long) : ����������� ������ � unsigned long.
//stoull(string to unsigned long long) : ����������� ������ � unsigned long long.
//��� ������� ����� ����� ������������ ���������� ��� ��������� ������� ������.
//stof, stod, � stold :
//
//stof(string to float) : ����������� ������ � float.
//stod(string to double) : ����������� ������ � double.
//stold(string to long double) : ����������� ������ � long double.
//��� ������� ������� ��� �������������� �����, ���������� ���������� �����, � ����� ����� ������������ std::invalid_argument � std::out_of_range.


#include <iostream>
#include <string>
#include <exception>

int main() {
    try {
        std::string floatStr = "3.14159";
        float pi = std::stof(floatStr);
        std::cout << "Float: " << pi << std::endl;

        std::string intStr = "123456789012345";
        long long bigNum = std::stoll(intStr);
        std::cout << "Long Long: " << bigNum << std::endl;

        std::string invalidStr = "test";
        double invalidDouble = std::stod(invalidStr);  // ���������� std::invalid_argument
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    return 0;
}
