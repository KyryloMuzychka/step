#include <iostream>
#include <cmath>

using namespace std;

int main()
{	
	setlocale(LC_CTYPE, "ukr");

	float grn, cop, money;

	do {
		cout << "����i�� �����: ";
		cin >> money;
	} while (money < 0);

	cop = modff(money, &grn) * 100;	

	cout << grn << " ��� " << cop << " ���";

	return 0;
}