#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "������� ������� �������������� ���� ����� ����� �� 1 �� 1000" << endl;
	int cycle = 1, total = 0;
	while (cycle <= 1000)
	{
		total = total + cycle;
		cycle++;
	}
	cout << "����� ����� �� 1 �� 1000 = " << total << endl
		<< "������� �������������� ���� ����� ����� �� 1 �� 1000 = "
		<< total / 1000 << endl;
}




//*����� ������� �������������� ���� ����� ����� �� 1 �� 1000