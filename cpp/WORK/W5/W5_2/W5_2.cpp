#include <iostream>
#include <string>
#include <vector>

using namespace std;

//������ 3 : ��������� ���������
//���� : ������� ��������� Person � ��������� ���������� DateOfBirth.
//
//���������� ��������� DateOfBirth � ������ : day, month, � year.
//���������� ��������� Person � ������ : name(���, ������) � dob(���� ��������, DateOfBirth).
//�������� �������, ������� ��������� Person � ������� ��� ��� � ���� ��������.

struct DateOfBirth {
    int day;
    string month;
    int year;
};

struct Person {
    string name;
    DateOfBirth dob;
};

void PrintPerson(Person person)
{
    cout << "Person" << endl;
    cout << "Name: " << person.name << endl;
    cout << "Date of Birth: " << person.dob.day << " " << person.dob.month << " " << person.dob.year << endl;
    cout << endl;
}

//������ 4 : ������������ ���������� �����������
//���� : ������ �� ������� ��������, ����������� ���������� �� ����� ���������� ���������.
//
//�������� ������������ ������ �������� Person.
//�������� ������� ��� ���������� ������ Person � ������ � ������ ���� ����� � �������.


void PrintPersons(vector<Person> array)
{
    for (int i = 0; i < array.size(); i++)    
        PrintPerson(array[i]);    
}

void AddPerson(vector<Person> &array, Person p)
{
    array.push_back(p);
}

int main()
{
    int size = 2;
    Person person = { "John", {15, "april", 2000} };
    PrintPerson(person);

    vector<Person> arrayPerson;
    arrayPerson.push_back({ "Sam", {20, "february", 2001} });
    arrayPerson.push_back({ "Kate", {11, "may", 2003 } });
        
    AddPerson(arrayPerson, person);
    PrintPersons(arrayPerson);

    return 0;
}