#include <iostream>
#include <string>

using namespace std;

//������ 1: ����������� � ������������� ���������
//���� : ������� ��������� Car ��� �������� ���������� �� ����������.
//
//���������� ��������� Car � ������ : make(�����, ������), model(������, ������) � year(��� �������, ����� �����).
//�������� �������, ������� ��������� ������ Car � ������� ��� ������.

struct Car {
	string make;
	string model;
	int year;
};

void PrintCar(Car car)
{
	cout << "Car" << endl;
	cout << "Make: " << car.make << endl;
	cout << "Model: " << car.model<< endl;
	cout << "Year: " << car.year << endl;
	cout << endl;
}

//������ 2 : ������ �� ������� ��������
//���� : ������� ������ �������� Car � ������� ���������� � ������ ����������.
//
//���������� ������ �� ��� ����������� ���� Car � ��������������� ��� ���������� ����������.
//�������� �������, ������� ��������� ������ ����������� � �� ����������, ����� ������� ���������� � ������ ����������.

void PrintCars(Car arr[], int size)
{			
	for (int i = 0; i < size; i++)	
		PrintCar(arr[i]);	
}

int main()
{
	Car car = { "Skoda", "Octavia", 2024 };
	PrintCar(car);
	
	Car carArray[3];
	carArray[0] = { "Honda", "Civic", 2012 };
	carArray[1] = { "Toyota", "Camry", 2015 };
	carArray[2] = { "Volkswagen", "Passat", 2018 };
	PrintCars(carArray, sizeof(carArray) / sizeof(carArray[0]));

	return 0;
}