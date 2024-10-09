#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void Kalkulator(string n, int a) // Процедура.
{ 
	cout << n << " " << a << endl << endl;
}

int Sloshenie(int a, int b) // Функция.
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
		cout << "Вычесть отрицательное число - значит сложить..." << endl;
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
		cout << "Деление на ноль невозможно..." << endl;
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
	Kalkulator("Сумма =", Sloshenie(45, 5));
	Kalkulator("Вычитание =", Vichitanie(45, 15));
	Kalkulator("Деление =", Delenie(45, 15));
	Kalkulator("Умножение =", Umnoshenie(45, 5));
	Kalkulator("Возведения в степень =", Sravnit(2, 6));
}