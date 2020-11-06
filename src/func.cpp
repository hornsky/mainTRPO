#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

float Addition(float x, float y) {return x + y;}

float Subtraction(float x, float y)  {return x - y;}

float Multiplication(float x, float y)  {return x * y;}

float Division(float x, float y)
{
	if (y == 0)
	{	
		cout << "test_Division : isn't possible by zero" << endl;
		return 0;
	}
	else
		return x / y;
}

unsigned int Factorial(unsigned int b)
{
	return ((0 < b) && (b < 13)) ? Factorial(b - 1) * b : 1;
}

unsigned int body_of_Factorial()
{
	unsigned int b;
	cout << "Enter unsigned int number : ";
	cin >> b;

	if ((b >= 13) || (b < 0))
	{
		cout << "Number isn't unsigned or Your factorial will be greater than 4.294.967.295. Try using a lower number." << endl;
		return 0;
	}

	cout << "Your Factorial of " << b << " is ";
	return Factorial(b);
}

float Exponentiation(float x, float y)
{
	return pow(x,y);
}