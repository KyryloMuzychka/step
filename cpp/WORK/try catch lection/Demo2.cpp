//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    std::vector<int> vec = { 1, 2, 3 };
//    std::cout << "�������� ��������: " << vec.at(5) << std::endl; // ����� �� ������� �������
//    return 0;
//}


#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    vector<int> vec = { 1, 2, 3 };
    try {
        cout << "�������� ��������: " << vec.at(5) << endl;
    }
    catch (const out_of_range& e) {
        cerr << "������: " << e.what() << endl;
    }
    return 0;
}
