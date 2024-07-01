#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//������� 1: ������ ������� maxValue
//���� : �������� ������ ������� maxValue, ������� ���������� ���������� �� ���� ���������� ��������.
//
//���������� ������� maxValue � �������������� �������, ������� ��������� ��� ��������� ������ ����(��� ���� ��� ������������ �������� ���������) � ���������� ���������� �� ���.
//������������� ��� ������� � ���������� ������ ������, ��������, int, double � char.

template <typename T>
T maxValue(T a, T b)
{
	return (a > b) ? a : b;
}

//������� 2: ������ ������� printArray
//���� : ������� ������ ������� printArray, ������� ������� ��� �������� �������.
//
//������������ ������� printArray, ������� ��������� ������ � ��� ������ ��� ���������.
//������� ������ �������� ��� �������� �������.
//������������� ������� � ��������� ������ �����, ����� ��� int, float � char.

template <typename T>
void printArray(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//������� 3: ������ ������� ��� ������ ������ ���������
//���� : �������� ������ ������� printData, ������� ������� �������� ������������� ���� ���������.
//
//���������� ��������� ��������, ��������, Car � ����� model � Book � ����� title.
//���������� ������ ������� printData, ������� ������� �������� ���������� ���� ���������.
//������������� ��� ������� � ������ �����������.

struct Book {
	string title;
	string author;
	int year;
};

struct Car {
	string make;
	string model;
	int year;
};


template <typename T>
void printData(T object)
{
	if constexpr (is_same_v<T, Car>) {
		cout << object.model << endl;
	}
	else if constexpr (is_same_v<T, Book>) {
		cout << object.title << endl;
	}
}


//������� 4: ������ ������� ��� ��������� ����� ���������
//���� : ������� ������ ������� isEqual, ������� ���������� �������� ����������� ����� ���� ��������.
//
//���������� ��������� Employee � ����� id � ��������� Member � ����� id.
//���������� ������� isEqual, ������� ���������� ���� id ���� ��������.
//��������� �������, ������� Employee � Member.


struct Employee {
	int id;
	string name;
};

struct Member {
	int id;
	string name;
};

template <typename T, typename U>
bool isEqual(T struct1, U struct2) {
	return struct1.id == struct2.id && struct1.name == struct2.name;
}

//������� 5: ������ ������� ��� ���������� ������ � ���������
//����: �������� ������ ������� updateField, ������� ��������� �������� ������������� ���� � ���������.
//
//���������� ��������� Product � ������ name � price.
//������������ ������� updateField, ������� �������� �������� ���������� ���� � ���������.
//����������� ������� ��� ��������� name � price � Product.

struct Product {
	string name;
	int price;
};

template <typename T, typename U>
void updateField(T& object, string field, U newValue)
{
	if (field == "name")
	{
		object.name = newValue;
	}
	else if (field == "price")
	{	
		stringstream ss;
		ss << newValue;
		ss >> object.price;
	}
}

int main()
{
	//5
	Product p = { "Ball", 100 };
	updateField<Product, int>(p, "price", 200);
	updateField<Product, string>(p, "name", "skates");
	cout << "Name: " << p.name << " Price: " << p.price << endl;
	
	//4
	Employee employee1 = { 100, "John" };
	Member member1 = { 100, "John" };
	Employee employee2 = { 200, "Alice" };
	Member member2 = { 200, "Bob" };
	cout << isEqual<Employee, Member>(employee1, member1) << endl;
	cout << isEqual<Employee, Member>(employee2, member2) << endl;
	
	//1
	cout << maxValue<int>(2, 3) << endl;
	cout << maxValue<double>(2.4, 1.2) << endl;
	cout << maxValue<char>('a', 'b') << endl;
	
	//2 
	int arr1[] = { 1, 2, 3, 4, 5 };
	double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	char arr3[] = { 'a', 'b', 'c', 'd' };
	printArray<int>(arr1, 5);
	printArray<double>(arr2, 5);
	printArray<char>(arr3, 4);
	
	//3
	Car car = { "Skoda", "Octavia", 2015 };
	Book book = { "The Da Vinci Code", "Dan Brown", 2018 };
	printData<Car>(car);
	printData<Book>(book);

	return 0;
}