#include "interpreterTwo.h"
#include <string>
#include <iostream>
using namespace std;
string interpreterTwo(int value)
{
		string temp("");
		do
		{
			int r(value % 16);
			if (r > 9)
			{ 
				r += (int)'A' - 10;
			}
			else
			{ 
				r += (int)'0';
			};
			temp = (char)r + temp;
			value /= 16;
		} while (value);
		return temp;
}
