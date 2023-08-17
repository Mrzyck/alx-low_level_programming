#include "main.h"

/**
 * print_line - prints line
 *
 * @n: integer to print line
 */

void print_line(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
