#include <iostream>

using namespace std;

//�������� 2. �������� �������, ��� ������ � �����
//��������� 2 ����� ����� �� ������� ���� ����� �� �������� �� ����.

int GetSumOfRange(int start, int end)
{
	int res = 0;
	for (int i = start + 1; i < end; i++)
		res += i;
	return res;
}

int main()
{
	cout << GetSumOfRange(1, 10);
	return 0;
}
