#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int k, factor=2;

	cout << "������� �� ����� ������� ��������� �� k" "\n"
		"������� � ";
	cin >> k;

	while (factor <= 20)
	{
		cout << k << " x " << factor << " = " << k * factor << endl;
		factor++;
	}
	return 0;
}



//�������� ���������, ������� ������� �� ����� ������� ��������� �� k, 
//��� k � ����� ��������. ��������, ��� 7-�� ��������:
//7 x 2 = 14
//7 x 3 = 21