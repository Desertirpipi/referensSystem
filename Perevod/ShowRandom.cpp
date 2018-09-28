#include "ShowRandom.h"
#include<iostream>
void ShowRandom(int *& arr,int size)
{
	std::cout << "Число  для перевода: ";
	for ( int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
