#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, y, cycle = 1, total = 1;

	cout << "��������� �������� x � ������� y" "\n"
		"������� ����� �";
	cin >> x;
	cout << "������� ����� y";
	cin >> y;

	if (y <= 0 || x == 0)
	{
		cout << "�������� ������, �������� ����� \n";
		return 1;
	}

	while (cycle <= y)
	{
		total = total*x;
		cycle++;
	}

	cout << x << " � ������� " << y << " = " << total << "\n";
	return 0;
}



//*. �������� ���������, ������� ����������� ��� ����� ����� x � y, 
//*����� ���� ��������� � ������� �������� x � ������� y.