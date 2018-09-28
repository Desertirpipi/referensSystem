#include "interpreter.h"
#include <iostream>
int interpreter(int arr[], int & size)
{
	int x = 0;
	const int SIZE = size - 1;
	std::cout << std::endl;
	for (int i = 0; i < size;)
	{
		for (int j = SIZE; j >= 0; j--, i++)
		{
			int result = arr[i] * pow(2, j);
			x += result;
		}
	}
	return x;
}
