// ������� 1: ���������� ������ Person
// ������ : ���������� ����� Person, ������� �������� ������� ��������, ����� ��� ��� � �������.
// ����� �������� ����� Student, ������� ����������� �� Person � ��������� ������������� �������� � ������,
// ����� ��� ����� ������������� ������ � ����� ��� ����������� ������ ���������� � ��������.

#include <iostream>
#include "Student.h"
#include "Person.h"

int main()
{
    Student student;
    student.name = "Sam";
    student.age = 20;
    student.studentNumberID = 123;
    student.showStudentInfo();
    return 0;
}
