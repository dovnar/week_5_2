#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int b = 500;
	int a, totle = 0;

	cout << "������ ����� ����� ����� �� � �� 500" "\n"
		"������� ����� a: ";
	cin >> a;
	if (a > b)
	{
		cout << "a ������ 500, ������ ��������� ������";
		return 1;
	}
	while (a<=b)
	{
		totle = totle + a;
		a++;
	}
	cout << "����� ����� ����� �� a �� 500 = " << totle << endl;
}


//*�������� ���������, ������� ���������
//*����� ����� ����� �� � �� 500 (��������
//*	a �������� � ����������).