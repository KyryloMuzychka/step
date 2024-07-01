#include <iostream>
#include <vector>
#include <stdexcept>
#include <fstream>

using namespace std;

// ������� ��� �������� ����������� ����������� ��������
void setPercentage(int percent) {
    if (percent < 0 || percent > 100) {
        throw invalid_argument("������� ������ ���� � �������� �� 0 �� 100");
    }
    cout << "������������� �������: " << percent << endl;
}

// ������� ��� ������� � �������� �������
void accessElement(const vector<int>& vec, int index) {
    if (index < 0 || index >= vec.size()) {
        throw out_of_range("������ ��� ����������� ��������� �������");
    }
    cout << "�������� ��������: " << vec[index] << endl;
}

// ������� ��� ��������� ������� ������
void resizeString(string& str, size_t newSize) {
    if (newSize > str.max_size()) {
        throw length_error("����������� ������ ��������� ����������� ���������� ��� ������");
    }
    str.resize(newSize);
    cout << "����� ������ ������: " << str.size() << endl;
}

// ������� ��� ��������� �����
void processFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        throw runtime_error("�� ������� ������� ����");
    }
    cout << "���� ������� ������." << endl;
}

// ������� ������� ���������
int main() {
    setlocale(LC_ALL, "Russian");
    try {
        //setPercentage(110);
        //vector<int> vec = { 1, 2, 3 };
        //accessElement(vec, 2);
        string myString = "������ ������";
        resizeString(myString, 1000);
        //processFile("example.txt");
    }
    catch (const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() << endl;
    }
    catch (const out_of_range& e) {
        cerr << "Out of range error: " << e.what() << endl;
    }
    catch (const length_error& e) {
        cerr << "Length error: " << e.what() << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cerr << "Other error: " << e.what() << endl;
    }

    return 0;
}
