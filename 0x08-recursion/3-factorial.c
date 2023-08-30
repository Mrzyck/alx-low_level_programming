#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n:int value
 * Description: Write a function that returns the factorial of a given number.
 * Return: int
 */

int factorial(int n)
{
	int num;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		num = n * factorial(n - 1);
	}
			return (num);

}
