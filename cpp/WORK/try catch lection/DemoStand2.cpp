#include <vector>
#include <iostream>
#include <stdexcept>

using namespace std;

void testFunction(int index, int size) {
    if (size <= 0) {
        throw length_error("������ ������� ������ ���� ������ ����");
    }
    vector<int> vec(size);
    if (index < 0 || index >= size) {
        throw out_of_range("������ ��� ��������� �������");
    }
    cout << "������ � ��������: " << vec[index] << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    try {
        testFunction(5, 4);
    }
    catch (const length_error& le) {
        cerr << "������: " << le.what() << endl;
    }
    catch (const out_of_range& ore) {
        cerr << "������ ���������: " << ore.what() << endl;
    }
    catch (const exception& e) {
        cerr << "��������� ������: " << e.what() << endl;
    }
    return 0;
}
