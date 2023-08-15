#include "main.h"

/**
* print_sign - print sign after check n
* @n: a character to be checked
* Return: 1 for positive number and -1 for negative number, 0 for 0 value
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
