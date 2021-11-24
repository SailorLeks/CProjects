#include <iostream>
#include <math.h>

using namespace std;

float others(float num3, char oper)
{
	switch (oper)
	{
		case '0':
			return round(num3);
		case '2':
			return sqrt(num3);
		case '3':
			return cbrt(num3);
		case '^':
			return pow(num3, 2);
		default: return -1;
	}
	return round(num3);
}

float calc(float num1, float num2, char oper)
{
	switch (oper)
	{
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '*':
			return num1 * num2;
		case '/':
			return num1 / num2;
		

		default: return -1;
	}	
}

void chto()
{
	cout << "Не сегодня, друк";
}

int main()
{
	setlocale(0, "");

	cout << "[!] Калькулятор!" << endl << endl;
	cout << "[!] Список операций: " << endl;

	cout << "[+] Сложение" << endl;
	cout << "[-] Вычитание" << endl;
	cout << "[*] Умножение" << endl;
	cout << "[/] Деление" << endl;
	cout << "[^] Возведение в степень" << endl;
	cout << "[2] Квадртаный корень" << endl;
	cout << "[3] Кубический корень" << endl;
	cout << "[0] Округление" << endl << endl;

	cout << "[!] Выбери операцию: ";
	char oper;
	cin >> oper;

	if (oper == '+' || oper == '-' || oper == '*' || oper == '/')
	{
		cout << "[!] Введи число 1: ";
		float num1;
		cin >> num1;
		cout << "[!] Введи число 2: ";
		float num2;
		cin >> num2;

		cout << "Результат: " << calc(num1, num2, oper) << endl;
	}
	else if (oper == '^' || oper == '2' || oper == '3' || oper == '0')
	{
		cout << "[!] Введи число: ";
		float num3;
		cin >> num3;

		cout << "Результат: " << others(num3, oper) << endl;
	}
	else
	{
		chto();
	}
	system("pause");
}
