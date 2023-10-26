#include <stdio.h>
#include "main.h"

/**
 * print_binary - print binary
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int j;
	int next = 0;
	int number;

	for (j = 63; j >= 0; j--)
	{
		number = n >> j;
		if (number & 1)
		{
			_putchar('1');
			next++;
		}
		else if (next)
			_putchar('0');
	}
	if (!next)
		_putchar('0');
}
