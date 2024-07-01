//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    string text = "abcd";
//    int number = std::stoi(text); // �������� ������ ������
//    cout << "�����: " << number << endl;
//    return 0;
//}


#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string text = "abcd";
    try {
        int number = stoi(text);
        cout << "�����: " << number << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "������: " << e.what() << endl;
    }
    return 0;
}
