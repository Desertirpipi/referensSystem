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
	cout << "������� 1 ��� �������� �� �������� � ���������� �������  ����������. " << endl;
	cout << "������� 2 ��� �������� �� ���������� � ����������������� ������� ����������." << endl;
	cout << "������� 3 ���  ��������  �� �������� � �����������������. " << endl;
	string b = "";
	string c = "";
	cout << endl;
	cout << "���� ��� �����: ";
		cin >> value;
		switch (value)
		{
		case 1:
			int answer;
			randomGeneration(arr, size);
			ShowRandom(arr, size);
			do
			{
				cout << "������� ���  �����: ";
				cin >> answer;
				if (answer != interpreter(arr, size))
				{
					cout << "�������� ����� ?(p/l) ";
					cin >> yN;
					if (yN == 'p')
					{
						cout << "�����: " << interpreter(arr, size) << endl;
						break;
					}
				}

			} while (answer != interpreter(arr, size));
			cout << "���  ����� ������! " << endl;
			cout << "������� ��������� �������?(y/n): ";
			cin >> yN;
			cout << endl;
			break;
		case 2:

			randomGeneration(arr, size);
			cout << "�����  ��� ��������: " << interpreter(arr, size) << endl;
			do
			{
				cout << "������� ���  �����: ";
				cin >> b;
				if (b != interpreterTwo(interpreter(arr, size)))
				{
					cout << "�������� ����� ?(p/l) ";
					cin >> yN;
					if (yN == 'p')
					{
						cout << "�����: " << interpreterTwo(interpreter(arr, size)) << endl;
						break;
					}
				}

			} while (b != interpreterTwo(interpreter(arr, size)));
			cout << "���  ����� ������! " << endl;
			cout << "������� ��������� �������?(y/n): ";
			cin >> yN;
			cout << endl;
			break;
		case 3:
			randomGeneration(arr, size);
			ShowRandom(arr, size);

			do
			{
				cout << "������� ���  �����: ";
				cin >> c;
				if (c != interpreterTwo(interpreter(arr, size)))
				{
					cout << "�������� ����� ?(p/l) ";
					cin >> yN;
					if (yN == 'p')
					{
						cout << "�����: " << interpreterTwo(interpreter(arr, size)) << endl;
						break;
					}
				}

			} while (c != interpreterTwo(interpreter(arr, size)));
			cout << "���  ����� ������! " << endl;
			cout << "������� ��������� �������?(y/n): ";
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