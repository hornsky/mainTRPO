#include <iostream>
#include <stdlib.h>

using namespace std;

float Addition(float x, float y) {return x + y;}

float Subtraction(float x, float y)  {return x - y;}

float Multiplication(float x, float y)  {return x * y;}

float Division(float x, float y)
{
	if (y == 0)
	{	
		cout << "test_Division isn't possible by ";
		return 0;
	}
	else
		return x / y;
}
