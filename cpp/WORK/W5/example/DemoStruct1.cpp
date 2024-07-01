#include <iostream>
#include <string>
using namespace std;

// ��������� Person ��� �������� ���������� � ��������
struct Person {
    string name;
    int age;
};

// ��������� Date ��� ������������� ����
struct Date {
    int day;
    int month;
    int year;
};

// ��������� Product ��� ����� ������
struct Product {
    string name;
    double price;
    int quantity;
};

// ������� ��� ������ ���������� � ��������
void printPerson(const Person& person) {
    cout << "Name: " << person.name << ", Age: " << person.age << endl;
}

// ������� ��� ������ ����
void printDate(const Date& date) {
    cout << "Date: " << date.day << "/" << date.month << "/" << date.year << endl;
}

// ������� ��� ������ ���������� � ��������
void printProduct(const Product& product) {
    cout << "Product Name: " << product.name
        << ", Price: $" << product.price
        << ", Quantity: " << product.quantity << endl;
}

int main() {
    Person person = { "John Doe", 30 };
    Date birthdate = { 1, 1, 1990 };
    Product laptop = { "Laptop", 999.99, 10 };

    printPerson(person);
    printDate(birthdate);
    printProduct(laptop);

    return 0;
}
