#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a, total = 1;
	cout << "������� ������������ ���� ����� ����� �� a �� 20" "\n"
		"������� ����� � ";
	cin >> a;
	if (a < 1)
	{
		cout << "�� ����� �������� �����, � ������ ����: 1 <= a <= 20";
	}
	while (a <= 20)
	{
		total = total * a;
		a++;
	}
	cout << "������������ ����� = " << total << endl;
}


//*����� ������������ ���� ����� ����� �� a �� 20 (�������� a �������� � ���������� : 1 <= a <= 20).