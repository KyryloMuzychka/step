// ������� 2: ����� Book � ��� ����������
// ������ : �������� ����� Book, ������� �������� �������� ��������, ������ � ����.
// ���������� ����������� ����� EBook, ������� ����������� �� Book � ��������� ������������� ������� ��� ������� ����� �����
// (��������, PDF ��� ePub) � ����� ��� ����������� ������ ���������� �� ����������� �����.

#include <iostream>
#include "EBook.h"

int main()
{
	EBook ebook;
	ebook.title = "Inferno";
	ebook.author = "Dan Brown";
	ebook.price = 100;
	ebook.format = "pdf";

	ebook.showEBookInfo();

	return 0;
}