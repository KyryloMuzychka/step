// ������� 5: ������� ���������� ����������
// ������ : �������� ������� ����� Employee, ������� �������� ���������� � ����������, ������� ���, ��������� � ��������.
// ���������� ����������� ������ Manager � Intern.
// Manager ������ �������� ������ ��� ���������� ����������� � �������� �������,
// ����� ��� Intern ������ ��������� ������ � ������� ���������� � ����������.

#include <iostream>
#include "Intern.h"
#include "Manager.h"

int main()
{
    Manager manager;
    manager.name = "Sam";
    manager.position = "manager";
    manager.salary = 2000;

    manager.showInfoEmployee();
    manager.managmentOfSubordinates();
    manager.managmentOfBonusSystem();

    cout << endl;

    Intern intern;
    intern.name = "Kate";
    intern.position = "intern";
    intern.salary = 1000;
    intern.mentor = "Sam";
    intern.period = "12.04.2023 - 12.07.2023";

    intern.showInfoIntern();

    return 0;
}