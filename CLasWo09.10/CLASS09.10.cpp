#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void Kalkulator(string n, int a) // ���������.
{ 
	cout << n << " " << a << endl << endl;
}

int Sloshenie(int a, int b) // �������.
{
	return a + b;
}

int Vichitanie(int a, int b)
{
	if (b >= 0)
	{
		return a - b;
	}

	else
	{
		cout << "������� ������������� ����� - ������ �������..." << endl;
		return false;
	}
}

int Delenie(int a, int b)
{
	if (b != 0)
	{
		return a / b;
	}

	else (b == 0);
	{
		cout << "������� �� ���� ����������..." << endl;
		return 0;
	}
}

int Umnoshenie(int a, int b)
{
	return a * b;
}

int Sravnit(int a, int b)
{
	return  pow(a, b);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Kalkulator("����� =", Sloshenie(45, 5));
	Kalkulator("��������� =", Vichitanie(45, 15));
	Kalkulator("������� =", Delenie(45, 15));
	Kalkulator("��������� =", Umnoshenie(45, 5));
	Kalkulator("���������� � ������� =", Sravnit(2, 6));
}