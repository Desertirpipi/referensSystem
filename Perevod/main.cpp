#include <iostream>
#include "randomGeneration.h"
#include "interpreter.h"
#include "interpreterTwo.h"
#include "ShowRandom.h"
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int size = 0;
	int *arr = nullptr;
	char yN = ' ';
	int value;
	do
	{
	cout << "Введите 1 для перевода из двоичной в десятичную систему  исчесления. " << endl;
	cout << "Введите 2 для перевода из десятичной в шестнадцатиричную систему исчесления." << endl;
	cout << "Введите 3 для  перевода  из двоичной в шестнадцатиричную. " << endl;
	string b = "";
	string c = "";
	cout << endl;
	cout << "Поле для ввода: ";
		cin >> value;
		switch (value)
		{
		case 1:
			int answer;
			randomGeneration(arr, size);
			ShowRandom(arr, size);
			do
			{
				cout << "Введите ваш  ответ: ";
				cin >> answer;
				if (answer != interpreter(arr, size))
				{
					cout << "Показать ответ ?(p/l) ";
					cin >> yN;
					if (yN == 'p')
					{
						cout << "Ответ: " << interpreter(arr, size) << endl;
						break;
					}
				}

			} while (answer != interpreter(arr, size));
			cout << "Ваш  ответ верный! " << endl;
			cout << "Желаете повторить перевод?(y/n): ";
			cin >> yN;
			cout << endl;
			break;
		case 2:

			randomGeneration(arr, size);
			cout << "Число  для перевода: " << interpreter(arr, size) << endl;
			do
			{
				cout << "Введите ваш  ответ: ";
				cin >> b;
				if (b != interpreterTwo(interpreter(arr, size)))
				{
					cout << "Показать ответ ?(p/l) ";
					cin >> yN;
					if (yN == 'p')
					{
						cout << "Ответ: " << interpreterTwo(interpreter(arr, size)) << endl;
						break;
					}
				}

			} while (b != interpreterTwo(interpreter(arr, size)));
			cout << "Ваш  ответ верный! " << endl;
			cout << "Желаете повторить перевод?(y/n): ";
			cin >> yN;
			cout << endl;
			break;
		case 3:
			randomGeneration(arr, size);
			ShowRandom(arr, size);

			do
			{
				cout << "Введите ваш  ответ: ";
				cin >> c;
				if (c != interpreterTwo(interpreter(arr, size)))
				{
					cout << "Показать ответ ?(p/l) ";
					cin >> yN;
					if (yN == 'p')
					{
						cout << "Ответ: " << interpreterTwo(interpreter(arr, size)) << endl;
						break;
					}
				}

			} while (c != interpreterTwo(interpreter(arr, size)));
			cout << "Ваш  ответ верный! " << endl;
			cout << "Желаете повторить перевод?(y/n): ";
			cin >> yN;
			cout << endl;
			break;
		default:
			break;
		}
	} while (yN != 'n');
	delete[] arr;
	system("pause");
	return 0;
}