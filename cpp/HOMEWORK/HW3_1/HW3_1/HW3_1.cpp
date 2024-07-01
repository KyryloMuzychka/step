#include <iostream>
#include <cmath>

using namespace std;

//�������� 1. �������� �������, ��� ������ ��� ��������� : ������ ������� � �������� �������, �� ��������
//������ ����� �� ����� ��������� �����.

int Pow(int base, int n)
{
	int res = 1;
	
	while (n)
	{
		if (n & 1)
		{
			res *= base;
			n--;
		}
		base *= base;
		n /= 2;
	}	

	return res;
}

int main()
{
	cout << Pow(2, 7);
	cout << endl;
	cout << Pow(2, 6);
	return 0;
}