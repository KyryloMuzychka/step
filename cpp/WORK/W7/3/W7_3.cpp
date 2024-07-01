// ������� 3: ������ Vehicle � ��� �����������
// ������ : ���������� ����� Vehicle, ������� �������� ��������, ����� ��� ������������ �������� � ����.
// �������� ����������� ������ Car � Bicycle.����� Car ������ ��������� �������� ��� ���������� ������ � ���� �������, 
// � �� ����� ��� Bicycle ������ ����� ������� ��� ������� ���������.

#include <iostream>
#include "Car.h"
#include "Bicycle.h"

int main()
{
	Car car;
	car.color = "Black";
	car.maxSpeed = 180;
	car.amountDoors = 3;
	car.fuelType = "gasoline";
	
	car.showInfoCar();

	cout << endl;

	Bicycle bicycle;
	bicycle.color = "White";
	bicycle.maxSpeed = 40;
	bicycle.numberOfSpeeds = 5;

	bicycle.showBicycleInfo();

	return 0;
}