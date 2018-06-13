#include <iostream>
#include "safeArray.h"
using namespace std;

int division(int a, int b)
{
	if (b == 0)
		throw"division by zero";
	else 
		return a / b;
}

int main() {
	setlocale(LC_ALL, "russian");
	short a;
	cout << "which task?";
	cin >> a;
	switch (a) {
	case 1:
	{
		int a;
		cin >> a;
		try {
			if (a > 10)
				throw 0.5;
			else if (a == 5)
				throw ('x');
			else if (a > 5)
				throw "unknown error";
		}
		catch (double d) {
			cout << d << endl;
		}
		catch (char c) {
			cout << c << endl;
		}
		catch (char *str) {
			cout << str << endl;
		}
		catch (...) {
			cout << "error cant be handle" << endl;
		}

		cout << "success\n";
	}break;

	case 2:
	{
		int a, b, c;
		cin >> a >> b;
		try {
			c = division(a, b);
			cout << c << endl;
		}
		catch (char*str) {
			cout << str << endl;
		}
		catch (...) {
			cout << "hello";
		}

	}break;

	case 3: {
		int arr[5] = { 4,5,1,2,6 };
		int i;
		cout << "введите индекс, чтобы узнать какое это число: "; cin >> i;
			try {
				if (i >= 5)
					throw "такого индекса нет в этом массиве";
				else if (i < 0)
					throw "индекс меньше нуля";
				cout << arr[i] << endl;

		}
		catch (char*str) {
			cout << str << endl;
		}
		catch (...) {
			cout << "неизвестная ошибка\n";
		}
	}break;

	case 4: {
		SafeArray<int> arr(5);
		try {
			arr[4] = 100;
			arr[12] = 200;
		}
		catch (char *str) {
			cout << str << endl;
		}
		catch (...)
		{
			cout << "error\n";
		}

	}break;

	}


	system("pause");

	return 0;

}