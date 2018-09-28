#include "randomGeneration.h"
#include <iostream>
#include <ctime>
#include <random>

void  randomGeneration(int *&arr, int & size)
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	std::random_device random_device;
	std::mt19937 generator(random_device());
	std::uniform_int_distribution<> distribution(4, 8);
	size = distribution(generator);
	arr = new  int[size];
	for (int i = 0; i < size; i++)
	{

		std::random_device random_device;
		std::mt19937 generator(random_device());
		std::uniform_int_distribution<> distribution(0, 1);
		int tmp;
		tmp = distribution(generator);
		arr[i] = tmp;
	}
}
