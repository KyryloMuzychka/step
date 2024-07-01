// ������� 4: ����� Product � ��� �������������
// ������ : ������������ ����� Product, ������� �������� ��������, ����� ��� ���� � ������������.
// �������� ����������� ������ FoodProduct � TechProduct.FoodProduct ������ ��������� �������� � ����� ��������, 
// � TechProduct � ���������� � ����������� ����� � �������������.


#include <iostream>
#include "TechProduct.h"
#include "FoodProduct.h"

int main()
{
    FoodProduct foodProduct;
    foodProduct.name = "Milk";
    foodProduct.price = 100;
    foodProduct.expirationDate = "15.04.2024";

    foodProduct.showInfoFoodProduct();

    cout << endl;

    TechProduct techProduct;
    techProduct.name = "Laptop";
    techProduct.price = 1000;
    techProduct.manufacturer = "China";
    techProduct.warrantyPeriod = 12;

    techProduct.showInfoTechProduct();

    return 0;
}
