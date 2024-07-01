// ������� 1: ���������� ������ Person
// ������ : ���������� ����� Person, ������� �������� ������� ��������, ����� ��� ��� � �������.
// ����� �������� ����� Student, ������� ����������� �� Person � ��������� ������������� �������� � ������,
// ����� ��� ����� ������������� ������ � ����� ��� ����������� ������ ���������� � ��������.

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Postgraduate.h"

int main()
{
    Student student("Sam", 20, 123);
    student.showStudentInfo();
    
    cout << endl;
    
    Postgraduate postgraduate("Kate", 25, 777, { "Git", "OOP" });
    postgraduate.showStudentInfo();
    postgraduate.showSubjects();

    return 0;
}