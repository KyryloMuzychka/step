#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a = 10, b = 0;
    int c = a / b; // ������� �� ����
    cout << "���������: " << c << endl;
    return 0;
}


//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    int a = 10, b = 0;
//    try {
//        if (b == 0) throw runtime_error("������: ������� �� ����");
//        int c = a / b;
//        cout << "���������: " << c << endl;
//    }
//    catch (const std::exception& e) {
//        cerr << e.what() << endl;
//    }
//    return 0;
//}
