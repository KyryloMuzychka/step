#include <iostream>
#include <string>
using namespace std;

void printBookDetails(string title, string author, int year, int pages, string janr) {
    cout << "Book: " << title << "\n"
        << "Author: " << author << "\n"
        << "Year: " << year << "\n"
        << "Pages: " << pages << "\n"
        << "Ganre: " << janr << endl;
}

struct Book {
    string title;
    string author;
    int year;
    int pages;
    string janr;
};

//�� �������� :
//��� �������� ��������� �� �������� ��������� ����� �������.���������, ��������� � ������ ������ �������, �� ���������� �� ������������ �������.
void processBook(Book book) {
    // ��������� � book ����� �� �������� �� ������������ ������
}

//�� ������ :
//�������� ��������� �� ������ ��������� ������� �������� ��������������� � ������������ ��������, ��� �������� ��� �����.���������, ��������� � �������, ����� ���������� �� ������������ �������.
void modifyBook(Book& book) {
    // ��������� � book �������� �� ������������ ������
}


//�� ����������� ������ :
//��� ��� �����������, �������� �� ����������� ������ ��������� ������� ������ ������, �� �� �������� ���.��� ����������� ������ �������� ������� ��������, ����� �� ��������� �� �����������.
void displayBook(const Book& book) {
    // ������� ����� ������ book, �� �� ��������
}

//�� ��������� :
//�������� �� ��������� ������ �� �������� �� ������, �� � ������ ������ ������������ ���������.��� ����� ��������� ������� �������� ������, �� ������� ��������� ���������.
void updateBook(Book* book) {
    if (book != nullptr) {
        // ��������� � *book �������� �� ������������ ������
    }
}


void printBookDetails(const Book& book) {
    cout << "Book: " << book.title << "\n"
        << "Author: " << book.author << "\n"
        << "Year: " << book.year << "\n"
        << "Pages: " << book.pages << endl;
}


int main() {
    Book book = { "1984", "George Orwell", 1949, 328 };
    printBookDetails(book);
    return 0;
}
